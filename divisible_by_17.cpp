//C program to calculate the sum of all numbers not divisible by 17 between two given integer numbers.

#include <stdio.h>

int main(void)
{
	int num1, num2, temp, i;
	int sum = 0;
	
	printf("Enter two integer numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	for(i = num1 + 1; i < num2; i++)
	{
		if(i % 17 != 0)
		sum = sum + i;
	}
	
	printf("Sum of all numbers not divisible by 17 between %d and %d is %d", num1, num2, sum);
	
	return 0;
}
