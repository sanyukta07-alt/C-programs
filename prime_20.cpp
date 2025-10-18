/*Write a C program that prints out the prime numbners between 1 and 200. The output should be such that each row contains a maximum of 20 prime numbers*/

#include <stdio.h>

int isPrime(int number);

int main(void)
{
	int start = 0;
	int stop = 200;
	int count = 1;
	
	for(start = 1; start <= stop; start++)
	{
		if(isPrime(start) && count%20 != 0)
		{
			printf("%d ", start);
			count++;
		}
		
		else if(isPrime(start) && count%20 == 0)
		{
			printf("%d\n", start);
			count++;
		}
	}
	
	return 0;
}

int isPrime(int number)
{
	int countFactors = 0;
	int i = 0;
	
	for(i = 1; i <= number; i++)
	{
		if(number%i == 0)
		countFactors++;
	}
	
	if(countFactors == 2)
	return 1;
	
	return 0;
}
