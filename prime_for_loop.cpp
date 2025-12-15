//check prime using for loop

#include <stdio.h>

int main(void)
{
    int num, i, temp = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    for(i = 1; i <= num/2; i++)
    {
        if(num % i == 0)
            temp++;
    }

    if(temp == 1)
    printf("The number is a prime number");

    else
    printf("The number is not a prime number");
}

