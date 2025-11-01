//Write a program in C to check whether a given number is a Kaprekar number or not.

#include <stdio.h>
#include <math.h>

int isKaprekar(int n);

int main(void) 
{
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isKaprekar(num))
        printf("%d is a Kaprekar number.", num);
    else
        printf("%d is NOT a Kaprekar number.", num);

    return 0;
}

int isKaprekar(int n)
{
	int square = n * n;
    int temp = n;
    int count = 0;
    
    while (temp != 0) 
	{
        count++;
        temp /= 10;
    }

    int divisor = (int)pow(10, count);
    int left = square / divisor;
    int right = square % divisor;
    
    return (left + right == n);

}

