/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() 
{
  int ni,n2;
   int total;
   float avg;
   
   printf("Enter number 1: ");
   scanf("%d", &n1);
   printf("Enter number 2: ");
   scanf("%d", &n2);
   
   total = n1 + n2;
   avg = total/2.0;
   printf("The average = %d" , avg);
  return 0;
}

