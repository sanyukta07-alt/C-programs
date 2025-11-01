//Write a program in C to check whether a given number is Deficient or not

#include <stdio.h>

int isDeficient(int n);

int main(void) 
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isDeficient(num) < num)
        printf("%d is an Deficient number.\n", num);
    else
        printf("%d is not an Deficient number.\n", num);

    return 0;
}

int isDeficient(int n)
{
	int i, sum = 0;
	
	 for (i = 1; i <= n / 2; i++) 
	 {
        if (n % i == 0) 
            sum += i;
     }
     
     return sum;
}
   
