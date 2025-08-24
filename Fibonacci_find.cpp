//Write a C program to check if a given number belongs to the Fibonacci Series or Not.

#include <stdio.h>

int Fibonacci(int number);

int main(void)
{
	int num=0;
	printf("\nEnter a number: ");
	scanf("%d", &num);
	
	if(Fibonacci(num)==1)
	printf("\n%d belongs in the Fibonacci Series.", num);
	else
	printf("\n%d does not belong in the Fibonacci Series.", num);
	
	return 0;
	
}
int Fibonacci(int number)
{
	int i;
	int first_term=0;
	int second_term=1;
	int next_term=0;
	for(i=0;i<=number;i++)
	{
		if(next_term==number)
			return 1;
		else	
		{
		next_term= first_term + second_term;
        first_term= second_term;
        second_term=next_term;
		}
        
	}
	return 0;
}
