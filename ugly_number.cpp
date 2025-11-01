//Write a program in C to check whether a given number is an ugly number or not.

#include <stdio.h>

int isUgly(int n);

int main(void) 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isUgly(num))
        printf("%d is an Ugly Number.", num);
    else
        printf("%d is NOT an Ugly Number", num);

    return 0;
}

int isUgly(int n) 
{
    if (n <= 0) 
	return 0;  
    int multiple[] = {2, 3, 5};
    
    for (int i = 0; i < 3; i++) 
	{
        while (n % multiple[i] == 0)
            n /= multiple[i];
    }

    return (n == 1);
}



