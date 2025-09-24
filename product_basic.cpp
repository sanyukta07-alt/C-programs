//Write a C program that accepts two integers from the user and calculates the product of the two integers.

#include <stdio.h>

int main(void)
{
	int num1, num2, product = 0;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	product = num1 * num2;
	
	printf("\nThe product of %d and %d is %d.", num1, num2, product);
	
	return 0;
}
