//Write a program in C to generate and show the first 15 narcissistic decimal numbers.

#include <stdio.h>
#include <math.h>

int main(void) 
{
    int count = 0;
    int num = 1;

    printf("The first 15 Narcissistic numbers are:\n");

    while (count < 15) 
	{
        if (isNarcissistic(num)) 
		{
            printf("%d ", num);
            count++;
        }
        num++;
    }

    printf("\n");
    return 0;
}


int isNarcissistic(int num) 
{
    int sum = 0, digits = 0;
	int temp;

    temp = num;
    while (temp > 0) 
	{
        digits++;
        temp /= 10;
    }

    temp = num;
    while (temp > 0) 
	{
        int d = temp % 10;
        sum += pow(d, digits);
        temp /= 10;
    }

    return (sum == num);
}


