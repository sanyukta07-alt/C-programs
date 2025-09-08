//C program to generate the first 10 prime numbers

#include <stdio.h>

int isPrime(int number);
int main(void)
{
	int countPrime= 10;
	int currentNumber= 1;
	
	printf("\nFirst 10 Prime Numbers are: ");
	
	while(countPrime != 0)
	{
		if(isPrime(currentNumber) == 1)
		{
			printf("%d ", currentNumber);
			currentNumber++;
			countPrime--;
		}
		else
		currentNumber++;
	}
	
	printf("\n");
	return 0;
	
}

int isPrime(int number)
{
	int i, countFactors=0;
	
	for(i=1; i<=number; i++)
	{
		//condition for complete division
		if(number%i==0)
		countFactors++;
	}
	
	//checking the number of factors of the given integer
	if(countFactors == 2)
	return 1;
	
	return 0;
}
