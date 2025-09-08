/*C program to check if a given number is a NEON NUMBER or not.
NEON NUMBER is a number whose summation of digits of its dquare is equal to itself. */

#include <stdio.h>
#include <math.h>

int isNeon(int number);

int main(void)
{
	int number=0;
	
	printf("\nEnter any number: ");
	scanf("%d", &number);
	
	if(isNeon(number))
	printf("\n%d is a NEON NUMBER\n", number);
	else
	printf("\n%d is NOT a NEON NUMBER\n", number);
	
	return 0;
}

int isNeon(int number)
{
	int square =(int)pow(number, 2);
	int total = 0;
	
	while(square != 0)
	{
		total+= square % 10;
		square/=10;
	}
	
	if(total == number)
	return 1;
	
	return 0;
}
