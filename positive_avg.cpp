//C program that reads 5 numbers, counts the number of positive numbers, and prints out the average of all positive values.

#include <stdio.h>

int main(void) 
{
    int num, i, sum = 0;
    int positive = 0;
    double average = 0.00;

    printf("Enter 5 numbers:\n");

    for (i = 0; i < 5; i++) 
	{
        scanf("%d", &num);

        if(num > 0)
        {
		  positive++;
		  sum = sum + num;
	    }
    }

     average = sum / positive;
     
    printf("\nNumber of positive numbers = %d\n", positive);
    printf("Average of all positive numbers = %.3lf\n", average);

    return 0;
}

