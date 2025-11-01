//Write a program in C to generate and show all Kaprekar numbers less than 1000.

#include <stdio.h>
#include <math.h>

int isKaprekar(int n);

int main(void) 
{
    int i;

	printf("All Kaprekar Numbers less than 1000 are: \n");
	for(i = 0; i < 1000; i++)
	{
	if (isKaprekar(i))
        printf("%d ", i);
	}

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
