//Write a program in C to check whether a given number is Abundant or not.

#include <stdio.h>

int isAbundant(int n);

int main(void) 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isAbundant(num) > num)
        printf("%d is an Abundant number.\n", num);
    else
        printf("%d is not an Abundant number.\n", num);

    return 0;
}

int isAbundant(int n)
{
	int i, sum = 0;
	
	 for (i = 1; i <= n / 2; i++) 
	 {
        if (n % i == 0) 
            sum += i;
     }
     
     return sum;
}
   

