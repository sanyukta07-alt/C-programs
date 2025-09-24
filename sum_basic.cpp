//Write a C program that accepts two integers from the user and calculates the sum of the two integers.

#include <stdio.h>

int main(void)
{
	int num1, num2, sum = 0;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	sum = num1 + num2;
	
	printf("\nThe sum of %d and %d is %d.", num1, num2, sum);
	
	return 0;
}
