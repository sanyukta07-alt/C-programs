//C program to check if a given number is PERFECT or NOT.

#include <stdio.h>

int isPerfect(int number);

int main(void)
{
	int number=0;
	printf("\nEnter any number: ");
	scanf("%d", &number);
	
	if(isPerfect(number) == 1)
	printf("\n%d is a PERFECT NUMBER\n", number);
	else
	printf("%d is NOT a PERFECT NUMBER\n", number);
	
	return 0;
}

int isPerfect(int number)
{
	int sumOfFactors=0;
	int i=0;
	
	for(i=1; i<number; i++)
	{
		if(number % i ==0)
		sumOfFactors+= i;
	}
	
	if(sumOfFactors == number)
	return 1;
	
	return 0;
}
