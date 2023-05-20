#include <stdio.h>
int main() {
 int numStudents = 200;
 int numAs = 0, numBs = 0, numCs = 0, numDs = 0, numFs = 0;
 printf("Enter the student number and number grade for each student:\n");
 for (int i = 1; i <= numStudents; i++) {
 int studentNumber, numberGrade;
 printf("Student %d\n", i);
 printf("Student Number: ");
 scanf("%d", &studentNumber);
 printf("Number Grade: ");
 scanf("%d", &numberGrade);
 if (numberGrade >= 90 && numberGrade <= 100) {
 numAs++;
 } else if (numberGrade >= 78 && numberGrade <= 89) {
 numBs++;
 } else if (numberGrade >= 65 && numberGrade <= 77) {
 numCs++;
 } else if (numberGrade >= 50 && numberGrade <= 64) {
 numDs++;
 } else if (numberGrade < 50) {
 numFs++;
 }
 }
 printf("Grade Summary:\n");
 printf("A: %d\n", numAs);
 printf("B: %d\n", numBs);
 printf("C: %d\n", numCs);
 printf("D: %d\n", numDs);
 printf("F: %d\n", numFs);
 return 0;
}
