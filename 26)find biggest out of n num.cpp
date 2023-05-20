#include <stdio.h>
int main() {
 int n, i, num, max;
 // Read the value of n
 printf("Enter the value of n: ");
 scanf("%d", &n);
 // Read the first integer
 printf("Enter integer 1: ");
 scanf("%d", &max);
 // Read the remaining integers and find the biggest
 for (i = 2; i <= n; i++) {
 printf("Enter integer %d: ", i);
 scanf("%d", &num);
 if (num > max) {
 max = num;
 }
 }
 // Print the biggest number
 printf("The biggest number is: %d\n", max);
 return 0;
}
