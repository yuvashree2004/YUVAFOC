#include <stdio.h>
#include <stdlib.h>
int main() {
 int num, sum, checkDigit;
 char cardNumber[6];
 printf("Enter a four-digit number: ");
 scanf("%d", &num);
 // Calculate sum of digits
 sum = (num % 10) + ((num / 10) % 10) + ((num / 100) % 10) + ((num / 1000) % 10);
 // Check if sum is even or odd and set check digit
 if (sum % 2 == 0) {
 checkDigit = 0;
 } else {
 checkDigit = 1;
 }
 // Concatenate check digit with the four-digit number
 sprintf(cardNumber, "%d%d", num, checkDigit);
 printf("Original Number: %d\n", num);
 printf("New Number: %s\n", cardNumber);
 return 0;
}
