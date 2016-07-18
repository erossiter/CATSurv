#include "EAPEstimator.h"
#include "GSLFunctionWrapper.h"

double EAPEstimator::estimateTheta(Prior prior) {

	/**
	 * Because these denominator and numerator functions
	 * are used nowhere else, it makes sense to give them
	 * the smallest scope possible. As a result, they are
	 * declared as lambdas. They capture by reference because
	 * they need access to prior and likelihood, but, because
	 * they are passed to GSL's integration function, cannot
	 * take prior and likelihood as arguments.
	 */

	integrableFunction denominator = [&](double theta) {
		return likelihood(theta) * prior.prior(theta);
	};

	integrableFunction numerator = [&](double theta) {
		return theta * denominator(theta);
	};

	std::cout << questionSet.lowerBound << std::endl;
	
	return integralQuotient(numerator, denominator, questionSet.lowerBound, questionSet.upperBound);
}

double EAPEstimator::estimateSE(Prior prior) {
	const double theta_hat = estimateTheta(prior);

	integrableFunction denominator = [&](double theta) {
		return likelihood(theta) * prior.prior(theta);
	};

	integrableFunction numerator = [&](double theta) {
		const double theta_difference = theta - theta_hat;
		return theta_difference * theta_difference * denominator(theta);
	};

	return sqrt(integralQuotient(numerator, denominator, questionSet.lowerBound, questionSet.upperBound));
}

double EAPEstimator::integralQuotient(integrableFunction const &numerator,
                                   integrableFunction const &denominator,
                                   const double lower, const double upper) {
	/*
	 * Because GSL is a C library, not a C++ library, it is not easy to pass arbitrary
	 * C++ functions to GSL's integration routine. To solve this, wrap the arbitrary functions
	 * in a GSLFunctionWrapper, which is integrable.
	 */
	gsl_function *numeratorFunction = GSLFunctionWrapper(numerator).asGSLFunction();
	gsl_function *denominatorFunction = GSLFunctionWrapper(denominator).asGSLFunction();

	const double top = integrator.integrate(numeratorFunction, integrationSubintervals, lower, upper);
	const double bottom = integrator.integrate(denominatorFunction, integrationSubintervals, lower, upper);
	return top / bottom;
}



EstimationType EAPEstimator::getEstimationType() const {
	return EstimationType::EAP;
}

EAPEstimator::EAPEstimator(Integrator &integrator, QuestionSet &questionSet) : Estimator(integrator, questionSet) { }

