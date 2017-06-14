// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <RcppGSL.h>
#include <Rcpp.h>

using namespace Rcpp;

// probability
std::vector<double> probability(S4 catObj, NumericVector theta, IntegerVector item);
RcppExport SEXP catSurv_probability(SEXP catObjSEXP, SEXP thetaSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(probability(catObj, theta, item));
    return rcpp_result_gen;
END_RCPP
}
// likelihood
double likelihood(S4 catObj, double theta);
RcppExport SEXP catSurv_likelihood(SEXP catObjSEXP, SEXP thetaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihood(catObj, theta));
    return rcpp_result_gen;
END_RCPP
}
// prior
double prior(NumericVector x, CharacterVector dist, NumericVector params);
RcppExport SEXP catSurv_prior(SEXP xSEXP, SEXP distSEXP, SEXP paramsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< NumericVector >::type x(xSEXP);
    Rcpp::traits::input_parameter< CharacterVector >::type dist(distSEXP);
    Rcpp::traits::input_parameter< NumericVector >::type params(paramsSEXP);
    rcpp_result_gen = Rcpp::wrap(prior(x, dist, params));
    return rcpp_result_gen;
END_RCPP
}
// d1LL
double d1LL(S4& catObj, double theta, bool use_prior);
RcppExport SEXP catSurv_d1LL(SEXP catObjSEXP, SEXP thetaSEXP, SEXP use_priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4& >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type use_prior(use_priorSEXP);
    rcpp_result_gen = Rcpp::wrap(d1LL(catObj, theta, use_prior));
    return rcpp_result_gen;
END_RCPP
}
// d2LL
double d2LL(S4& catObj, double theta, bool use_prior);
RcppExport SEXP catSurv_d2LL(SEXP catObjSEXP, SEXP thetaSEXP, SEXP use_priorSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4& >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< bool >::type use_prior(use_priorSEXP);
    rcpp_result_gen = Rcpp::wrap(d2LL(catObj, theta, use_prior));
    return rcpp_result_gen;
END_RCPP
}
// estimateTheta
double estimateTheta(S4 catObj);
RcppExport SEXP catSurv_estimateTheta(SEXP catObjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    rcpp_result_gen = Rcpp::wrap(estimateTheta(catObj));
    return rcpp_result_gen;
END_RCPP
}
// obsInf
double obsInf(S4 catObj, double theta, int item);
RcppExport SEXP catSurv_obsInf(SEXP catObjSEXP, SEXP thetaSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(obsInf(catObj, theta, item));
    return rcpp_result_gen;
END_RCPP
}
// expectedObsInf
double expectedObsInf(S4 catObj, int item);
RcppExport SEXP catSurv_expectedObsInf(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(expectedObsInf(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// fisherInf
double fisherInf(S4 catObj, double theta, int item);
RcppExport SEXP catSurv_fisherInf(SEXP catObjSEXP, SEXP thetaSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< double >::type theta(thetaSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(fisherInf(catObj, theta, item));
    return rcpp_result_gen;
END_RCPP
}
// fisherTestInfo
double fisherTestInfo(S4 catObj);
RcppExport SEXP catSurv_fisherTestInfo(SEXP catObjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    rcpp_result_gen = Rcpp::wrap(fisherTestInfo(catObj));
    return rcpp_result_gen;
END_RCPP
}
// estimateSE
double estimateSE(S4 catObj);
RcppExport SEXP catSurv_estimateSE(SEXP catObjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    rcpp_result_gen = Rcpp::wrap(estimateSE(catObj));
    return rcpp_result_gen;
END_RCPP
}
// expectedPV
double expectedPV(S4 catObj, int item);
RcppExport SEXP catSurv_expectedPV(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(expectedPV(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// selectItem
List selectItem(S4 catObj);
RcppExport SEXP catSurv_selectItem(SEXP catObjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    rcpp_result_gen = Rcpp::wrap(selectItem(catObj));
    return rcpp_result_gen;
END_RCPP
}
// expectedKL
double expectedKL(S4 catObj, int item);
RcppExport SEXP catSurv_expectedKL(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(expectedKL(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// likelihoodKL
double likelihoodKL(S4 catObj, int item);
RcppExport SEXP catSurv_likelihoodKL(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(likelihoodKL(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// posteriorKL
double posteriorKL(S4 catObj, int item);
RcppExport SEXP catSurv_posteriorKL(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(posteriorKL(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// lookAhead
List lookAhead(S4 catObj, int item);
RcppExport SEXP catSurv_lookAhead(SEXP catObjSEXP, SEXP itemSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    Rcpp::traits::input_parameter< int >::type item(itemSEXP);
    rcpp_result_gen = Rcpp::wrap(lookAhead(catObj, item));
    return rcpp_result_gen;
END_RCPP
}
// checkStopRules
bool checkStopRules(S4 catObj);
RcppExport SEXP catSurv_checkStopRules(SEXP catObjSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< S4 >::type catObj(catObjSEXP);
    rcpp_result_gen = Rcpp::wrap(checkStopRules(catObj));
    return rcpp_result_gen;
END_RCPP
}
