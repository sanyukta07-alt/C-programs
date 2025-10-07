//C program to compute the sum of consecutive odd numbers from a given pair of integers.

#include <stdio.h>

int main(void)
{
	int n1, n2, i;
	int sum = 0;
	
	printf("\nEnter 1st number: ");
	scanf("%d", &n1);
	
	printf("\nEnter 2nd number: ");
	scanf("%d", &n2);
	
	if(n1 > n2) //checking if the first number is greater than y. If yes, swapping it
	{
		int temp = n1;
		n1 = n2;
		n2 = temp;
	}
	
	for( i = n1; i <= n2; i++)
	{
		if(i % 2 != 0)
		sum += i;
	}
	
	printf("\nSum of consecutive odd numbers between %d and %d is %d\n", n1, n2, sum);

    return 0;
}
