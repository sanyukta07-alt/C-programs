//Write a C program that prints all even numbers between 1 and 50 (inclusive).

#include <stdio.h>

int main(void)
{
	int i = 0;
	
	printf("\nAll the even numbers between 1 and 50: \n");
	
	for(i = 1; i <= 50; i++)
	{
		if(i % 2 == 0)
		printf("%d ", i);
	}
	
	return 0;
}
