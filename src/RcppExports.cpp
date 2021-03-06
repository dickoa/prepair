// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <Rcpp.h>

using namespace Rcpp;

// CPL_prepair_oddeven
Rcpp::List CPL_prepair_oddeven(Rcpp::List sfc, double min_area);
RcppExport SEXP _prepr_CPL_prepair_oddeven(SEXP sfcSEXP, SEXP min_areaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< double >::type min_area(min_areaSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_prepair_oddeven(sfc, min_area));
    return rcpp_result_gen;
END_RCPP
}
// CPL_prepair_setdiff
Rcpp::List CPL_prepair_setdiff(Rcpp::List sfc, double min_area);
RcppExport SEXP _prepr_CPL_prepair_setdiff(SEXP sfcSEXP, SEXP min_areaSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    Rcpp::traits::input_parameter< double >::type min_area(min_areaSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_prepair_setdiff(sfc, min_area));
    return rcpp_result_gen;
END_RCPP
}
// CPL_robustness
Rcpp::NumericVector CPL_robustness(Rcpp::List sfc);
RcppExport SEXP _prepr_CPL_robustness(SEXP sfcSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< Rcpp::List >::type sfc(sfcSEXP);
    rcpp_result_gen = Rcpp::wrap(CPL_robustness(sfc));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_prepr_CPL_prepair_oddeven", (DL_FUNC) &_prepr_CPL_prepair_oddeven, 2},
    {"_prepr_CPL_prepair_setdiff", (DL_FUNC) &_prepr_CPL_prepair_setdiff, 2},
    {"_prepr_CPL_robustness", (DL_FUNC) &_prepr_CPL_robustness, 1},
    {NULL, NULL, 0}
};

RcppExport void R_init_prepr(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
