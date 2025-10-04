//Write a C program that reads 5 numbers and counts the number of positive numbers and negative numbers

#include <stdio.h>

int main(void) 
{
    int num, i;
    int positive = 0, negative = 0;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &num);

        if(num > 0) 
            positive++;
            
        else if(num < 0) 
            negative++;
            
    }

    printf("\nNumber of positive numbers = %d\n", positive);
    printf("Number of negative numbers = %d\n", negative);

    return 0;
}

