#include <stdio.h>
double calculateExponentialSeries(double x, int n) {
 double sum = 1.0, term = 1.0;
 int i, fact = 1;
 // Calculate the exponential series
 for (i = 1; i <= n; i++) {
 term *= (-1) * x / fact;
 sum += term;
 fact++;
 }
 return sum;
}
int main() {
 double x;
 int n;
 // Read the value of x
 printf("Enter the value of x: ");
 scanf("%lf", &x);
 // Read the number of terms
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 // Calculate and print the result
 double result = calculateExponentialSeries(x, n);
 printf("The value of e^(-%lf) using %d terms is: %lf\n", x, n, result);
 return 0;
}
