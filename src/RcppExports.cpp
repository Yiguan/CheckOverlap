// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CheckPoint
IntegerVector CheckPoint(IntegerVector pos, IntegerVector start, IntegerVector end);
RcppExport SEXP _CheckOverlap_CheckPoint(SEXP posSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(CheckPoint(pos, start, end));
    return rcpp_result_gen;
END_RCPP
}
// CheckRange
IntegerVector CheckRange(IntegerVector pos, IntegerVector start, IntegerVector end);
RcppExport SEXP _CheckOverlap_CheckRange(SEXP posSEXP, SEXP startSEXP, SEXP endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end(endSEXP);
    rcpp_result_gen = Rcpp::wrap(CheckRange(pos, start, end));
    return rcpp_result_gen;
END_RCPP
}
// CheckMatch
DataFrame CheckMatch(IntegerVector pos, IntegerVector start, IntegerVector end, const char matchAll);
RcppExport SEXP _CheckOverlap_CheckMatch(SEXP posSEXP, SEXP startSEXP, SEXP endSEXP, SEXP matchAllSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type pos(posSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type start(startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type end(endSEXP);
    Rcpp::traits::input_parameter< const char >::type matchAll(matchAllSEXP);
    rcpp_result_gen = Rcpp::wrap(CheckMatch(pos, start, end, matchAll));
    return rcpp_result_gen;
END_RCPP
}
// CheckRange2Range
IntegerVector CheckRange2Range(IntegerVector check_start, IntegerVector check_end, IntegerVector other_start, IntegerVector other_end);
RcppExport SEXP _CheckOverlap_CheckRange2Range(SEXP check_startSEXP, SEXP check_endSEXP, SEXP other_startSEXP, SEXP other_endSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< IntegerVector >::type check_start(check_startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type check_end(check_endSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type other_start(other_startSEXP);
    Rcpp::traits::input_parameter< IntegerVector >::type other_end(other_endSEXP);
    rcpp_result_gen = Rcpp::wrap(CheckRange2Range(check_start, check_end, other_start, other_end));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_CheckOverlap_CheckPoint", (DL_FUNC) &_CheckOverlap_CheckPoint, 3},
    {"_CheckOverlap_CheckRange", (DL_FUNC) &_CheckOverlap_CheckRange, 3},
    {"_CheckOverlap_CheckMatch", (DL_FUNC) &_CheckOverlap_CheckMatch, 4},
    {"_CheckOverlap_CheckRange2Range", (DL_FUNC) &_CheckOverlap_CheckRange2Range, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_CheckOverlap(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
