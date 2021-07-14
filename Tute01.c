/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
	int mark1, mark2;
	float tot, avg;
	
	printf("Input subject 1 marks : ");
	scanf("%d", &mark1);
	
	printf("Input subject 2 marks : ");
	scanf("%d", &mark2);
	
	tot = (float)mark1 + mark2;
	avg = tot/2.0;
	
	printf("\nAverage = %.2f", avg);
  return 0;
}

