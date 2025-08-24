//to print the perfect numbers in between the range
#include <stdio.h>
int isPerfect(int number);

int main(void)
{
    int upper, lower;
    printf("\nEnter the lower limit: ");
    scanf("%d", &lower);
    printf("Enter the upper limit: ");
    scanf("%d", &upper);
    printf("\nPerfect numbers from range %d to %d:\n", lower, upper);
    for(int num = lower; num <= upper; num++)
    {
        if(isPerfect(num)==1)
            printf("%d ", num);
    }
    printf("\n");
    return 0;
}


int isPerfect(int number)
{
    int sumOfFactors = 0;
    for(int i = 1; i < number; i++)
    {
        if(number % i == 0)
          sumOfFactors += i;
    }
    
    if(sumOfFactors == number)
        return 1; 
    
	return 0; 
}
