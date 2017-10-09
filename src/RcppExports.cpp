// Generated by using Rcpp::compileAttributes() -> do not edit by hand
// Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#include <RcppArmadillo.h>
#include <Rcpp.h>

using namespace Rcpp;

// sigmoid
arma::vec sigmoid(const arma::vec& u, double eps);
RcppExport SEXP _fastlinmod_sigmoid(SEXP uSEXP, SEXP epsSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type u(uSEXP);
    Rcpp::traits::input_parameter< double >::type eps(epsSEXP);
    rcpp_result_gen = Rcpp::wrap(sigmoid(u, eps));
    return rcpp_result_gen;
END_RCPP
}
// nlogl_binom
double nlogl_binom(const arma::vec& beta, const arma::mat& X, const arma::vec& y, int m);
RcppExport SEXP _fastlinmod_nlogl_binom(SEXP betaSEXP, SEXP XSEXP, SEXP ySEXP, SEXP mSEXP) {
BEGIN_RCPP
    Rcpp::RObject rcpp_result_gen;
    Rcpp::RNGScope rcpp_rngScope_gen;
    Rcpp::traits::input_parameter< const arma::vec& >::type beta(betaSEXP);
    Rcpp::traits::input_parameter< const arma::mat& >::type X(XSEXP);
    Rcpp::traits::input_parameter< const arma::vec& >::type y(ySEXP);
    Rcpp::traits::input_parameter< int >::type m(mSEXP);
    rcpp_result_gen = Rcpp::wrap(nlogl_binom(beta, X, y, m));
    return rcpp_result_gen;
END_RCPP
}

static const R_CallMethodDef CallEntries[] = {
    {"_fastlinmod_sigmoid", (DL_FUNC) &_fastlinmod_sigmoid, 2},
    {"_fastlinmod_nlogl_binom", (DL_FUNC) &_fastlinmod_nlogl_binom, 4},
    {NULL, NULL, 0}
};

RcppExport void R_init_fastlinmod(DllInfo *dll) {
    R_registerRoutines(dll, NULL, CallEntries, NULL, NULL);
    R_useDynamicSymbols(dll, FALSE);
}
