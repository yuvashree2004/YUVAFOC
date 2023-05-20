#include <stdio.h>
int main() {
 int totalMiles = 0, totalGallons = 0, odometerReading, previousOdometerReading = 0;
 double averageMPG;
 for (int i = 1; i <= 6; i++) {
 int gallons;
 printf("Fillup %d\n", i);
 printf("Enter gallons of gas: ");
 scanf("%d", &gallons);
 int currentOdometerReading;
 printf("Enter odometer reading: ");
 scanf("%d", &currentOdometerReading);
 int milesDriven = currentOdometerReading - previousOdometerReading;
 totalMiles += milesDriven;
 totalGallons += gallons;
 previousOdometerReading = currentOdometerReading;
 }
 averageMPG = (double) totalMiles / totalGallons;
 printf("\nAverage MPG: %.2f\n", averageMPG);
 return 0;
}
