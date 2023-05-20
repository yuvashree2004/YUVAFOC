#include <stdio.h>
int main() {
 float originalPrice, salePrice;
 printf("Enter the original price of the item: ");
 scanf("%f", &originalPrice);
 salePrice = originalPrice;
 for (int day = 1; day <= 5; day++) {
 printf("Sale price on day %d: $%.2f\n", day, salePrice);
 salePrice = salePrice - (0.1 * salePrice);
 }
 return 0;
}
