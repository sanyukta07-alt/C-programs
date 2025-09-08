/* C program to check if a given number is a SPY NUMBER or not.
SPY NUMBER is a number whose summation of digits is equal to the product of its digits. */

#include <stdio.h>

int isSpy(int number);

int main(void)
{
	int number=0;
	printf("\nEnter any number: ");
	scanf("%d", &number);
	
	if(isSpy(number))
	printf("\n%d is a SPY NUMBER\n", number);
	else
	printf("\n%d is NOT a SPY NUMBER\n", number);
	
	return 0;
}

int isSpy(int number)
{
	int total = 0;
	int product = 1;
	int digit = 0;
	
	while(number != 0)
	{
		digit=number % 10;
		total+= digit;
		product*= digit;
		number/=10;
	}
	
	printf("\nSum of the digits: %d\n", total);
	printf("\nProduct of the digits: %d\n", product);
	
	if(total == product)
	return 1;
	
	return 0;
}
