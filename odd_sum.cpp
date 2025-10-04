//Write a C program that reads 5 numbers and sums all odd values between them.

#include <stdio.h>

int main(void) 
{
    int num, i = 0;
    int sum = 0;

    printf("\nEnter 5 numbers: ");

    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &num);
        
        if (num % 2 != 0)   
            sum += num;
    }

    printf("Sum of odd numbers = %d\n", sum);

    return 0;
}

