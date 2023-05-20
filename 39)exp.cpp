#include <stdio.h>
int main() {
 float loanAmount = 3000;
 float monthlyPayment = 85;
 float interestRate = 0.01;
 float balance = loanAmount;
 float totalInterest = 0;
 int numYears, numMonths;
 numYears = loanAmount / (12 * monthlyPayment);
  while (balance > 0) {
 float interest = interestRate * balance;
 float principal = monthlyPayment - interest;
 balance = balance - principal;
 totalInterest = totalInterest + interest;
 printf("Interest: $%.2f, Principal: $%.2f, Balance: $%.2f\n", interest, principal, balance);
 }
 printf("Number of years: %d, Number of months: %d\n", numYears, numMonths);
 printf("Total interest paid: $%.2f\n", totalInterest);
 return 0;
}
