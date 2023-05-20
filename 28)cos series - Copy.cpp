#include <stdio.h>
#include <math.h>
int main() {
 double x, sum = 1.0, term = 1.0;
 int n, sign = -1, fact = 2, i;
 // Read the value of x
 printf("Enter the value of x (in radians): ");
 scanf("%lf", &x);
 // Read the number of terms
 printf("Enter the number of terms: ");
 scanf("%d", &n);
 // Calculate the cosine series
 for (i = 1; i <= n; i++) {
 term *= sign * x * x / (fact * (fact - 1));
 sum += term;
 sign = -sign;
 fact += 2;
 }
 // Print the result
 printf("The value of cos(%lf) using %d terms is: %lf\n", x, n, sum);
 return 0;
}
