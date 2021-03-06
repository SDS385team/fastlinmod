# Generated by using Rcpp::compileAttributes() -> do not edit by hand
# Generator token: 10BE3573-1514-4C36-9D1C-5A225CD40393

#' @title Sigmoid function with truncation
#' @param u: numeric vector of input
#' @param eps: real number of truncation paramaeter if output is close to 0/1 
#' @return sigmoid evaluate at input u with truncation
#' @export
sigmoid <- function(u, eps = 1e-6) {
    .Call(`_fastlinmod_sigmoid`, u, eps)
}

#' @title Negative LogLikelihood of Binomial GLM
#' @param beta: numeric vector of parameters of linear model
#' @param X: numeric matrix with predictor variables
#' @param y: numeric vector with response variable
#' @param m: integer controlling the max number of successes in binomial response y
#' @return the negative loglikelihood evaluated at the input
#' @export
nlogl_binom <- function(beta, X, y, m) {
    .Call(`_fastlinmod_nlogl_binom`, beta, X, y, m)
}

