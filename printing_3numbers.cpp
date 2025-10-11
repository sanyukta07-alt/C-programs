//C program to print 3 numbers on a line, starting with 1 and printing n lines. Accept the number of lines (n, integer) from the user.

#include <stdio.h>

int main(void) 
{
    int number, i, j, num = 1;

    printf("Enter number of lines: ");
    scanf("%d", &number);

    for(i = 1; i <= number; i++) 
	{
        for(j = 1; j <= 3; j++) 
		{
            printf("%d ", num);
            num++;
        }
        printf("\n"); 
    }

    return 0;
}

