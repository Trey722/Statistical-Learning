#include <Rcpp.h>
using namespace Rcpp;

// Function to calculate the residual variance
// [[Rcpp::export]]
double variance_residuals(NumericVector residuals, int n, int p) {
  // Initialize a variable to store the sum of squared residuals
  double sum_of_squares = 0.0;
  
  // Loop over all residuals and accumulate the squared residuals
  for (int i = 0; i < n; ++i) {
    sum_of_squares += residuals[i] * residuals[i];
  }
  
  // Calculate the residual variance: sum of squares divided by (n - p)
  double residual_variance = sum_of_squares / (n - p);
  
  return residual_variance;
}

