//to print the perfect numbers in between the range

#include <stdio.h>
int isPerfect(double number);

int main(void)
{
    double num, upper, lower= 0.00;
    printf("\nEnter the lower limit: ");
    scanf("%lf", &lower);
    printf("Enter the upper limit: ");
    scanf("%lf", &upper);
    printf("\nPerfect numbers from range %lf to %lf:\n", lower, upper);
    for(num = lower; num <= upper; num++)
    {
        if(isPerfect(num)==1)
            printf("%lf ", num);
    }
    printf("\n");
    return 0;
}


int isPerfect(double number)
{
    double sumOfFactors = 0.00;
    for(int i = 1; i < number; i++)
    {
        if(((int)number % i )== 0)
          sumOfFactors += i;
    }
    
    if(sumOfFactors == number)
        return 1; 
    
	return 0; 
}
