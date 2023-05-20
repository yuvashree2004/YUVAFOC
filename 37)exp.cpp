#include <stdio.h>
int main() {
 float initialPrice, accessoryPrice, salesTaxRate, totalCost = 0;
 int numAccessories;
 printf("Enter the initial price of the car: ");
 scanf("%f", &initialPrice);
 printf("Enter the number of accessories: ");
 scanf("%d", &numAccessories);
 for (int i = 1; i <= numAccessories; i++) {
 printf("Enter the price of accessory %d: ", i);
 scanf("%f", &accessoryPrice);
 totalCost += accessoryPrice;
 }
 printf("Enter the sales tax rate: ");
 scanf("%f", &salesTaxRate);
 float salesTaxAmount = (salesTaxRate / 100) * (initialPrice + totalCost);
 totalCost = initialPrice + totalCost + salesTaxAmount;
 printf("Total cost of the car: $%.2f\n", totalCost);
 return 0;
}
