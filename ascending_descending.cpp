//C program to check if two numbers in a pair are in ascending order or descending order

#include <stdio.h>

int main(void)
{
	int num1, num2;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("\nEnter second number: ");
	scanf("%d", &num2);
	
	if(num1 > num2)
	printf("\nThe numbers in a pair are in descending order.");
	
	else if(num1 < num2)
	printf("\nThe numbers in a pair are in ascending order.");
	
	else
	printf("\nBoth numbers are equal.");
	
	return 0;
	
}
