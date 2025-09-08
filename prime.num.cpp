//C program to check if a given number is PRIME or not.

#include <stdio.h>

int main(void)
{
	int number=0;
	int countFactors=0;
	int i=0;
	
	printf("Enter any number: ");
	scanf("%d", &number);
	
	for(i=1; i<=number; i++)
	{
		//condition for complete division
		if(number%i==0)
		countFactors++;
		else
		continue;
	}
	
	//checking the number of factors of the given integer
	if(countFactors == 2)
	printf("%d is a PRIME NUMBER\n", number);
	else
	printf("%d is not a PRIME NUMBER\n", number);
	
	return 0;
}
