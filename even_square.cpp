//Write a C program to find and print the square of all the even values from 1 to a specified value.

#include <stdio.h>

int square(int num);
void display(int num, int sq);

int main(void)
{
	int limit, i, number = 0;
	
	printf("\nEnter the limit: ");
	scanf("%d", &limit);
    
    printf("Even numbers and their squares: \n");
    for (i = 1; i <= limit; i++) 
	{

        if(i % 2 == 0)
        square(i);
    }
    
    return 0;
}

int square(int num)
{
	display(num, (num * num));
}

void display(int num, int sq)
{
	printf("%d\t%d\n", num, sq);
}
