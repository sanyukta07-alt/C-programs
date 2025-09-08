/* C program to check if a given number is a HARSHAD NUMBER or not.
HARSHAD NUMBER = A number which is completely divisble by the summation of its digits. */

#include <stdio.h>
#include <math.h>

int getSumOfDigits(int number);
int isHarshad(int number);

int main(void)
{
	int number=0;
	printf("\nEnter any number: ");
	scanf("%d", &number);
	
	if(isHarshad(number))
	printf("\n%d is a HARSHAD NUMBER\n", number);
	else
	printf("\n%d is NOT a HARSHAD NUMBER\n", number);
	
	return 0;
}

int getSumOfDigits(int number)
{
	int total = 0;
	
	while(number != 0)
	{
		total+= number % 10;
		number/=10;
	}
	
	return total;
}

int isHarshad(int number)
{
	if(number % (getSumOfDigits(number)) == 0)
	return 1;
	
	return 0;
}
