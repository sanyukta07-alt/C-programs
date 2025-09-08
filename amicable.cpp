/* C program to check if a given pair of numbers form a FRIENDLY PAIR (AMICABLE NUMBERS) or not.
A pair of numbers where the summation of proper divisors of the first number is equal to the other. */

#include <stdio.h>

int get_sum_of_proper_divisors(int number);
int isAmicable(int number1, int number2);

int main(void)
{
	int my_number1 = 0;
	int my_number2 = 0;
	
	printf("\nEnter 1st number: ");
	scanf("%d", &my_number1);
	
	printf("\nEnter 2nd number: ");
	scanf("%d", &my_number2);
	
	if(isAmicable(my_number1, my_number2))
	printf("\n(%d,%d) is a FRIENDLY PAIR\n", my_number1, my_number2);
	else
	printf("\n(%d,%d) is NOT a FRIENDLY PAIR\n", my_number1, my_number2);
	
	return 0;
}

int get_sum_of_proper_divisors(int number)
{
	int i=0;
	int total = 0;
	
	for(i=1; i<number; i++)
	{
		if(number % i == 0)
		total+= i;
	}
	
	return total;
}

int isAmicable(int number1, int number2)
{
	if(get_sum_of_proper_divisors(number1) == number2)
	  return 1;
	
	return 0;
}
