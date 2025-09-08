//C program to REVERSE a given number

#include <stdio.h>

int getReverse(int number);

int main(void)
{
	int my_number=0;
	int copy=0;
	
	printf("\nEnter any number: ");
	scanf("%d", &my_number);
	copy=my_number;
	printf("\nReverse of %d = %d\n", copy, getReverse(my_number));
	
	return 0;
}

int getReverse(int number)
{
	int digit=0;
	int reverse=0;
	
	while(number != 0)
	{
		digit= number % 10;
		reverse= (reverse * 10) + digit;
		number/=10;
	}
	
	return reverse;
}
