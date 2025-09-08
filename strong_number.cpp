/*C program to check if a given number is a STRONG NUMBER or not.
It is a number where the summation of the factorials of its digits become equal to itself */

#include <stdio.h>

int getFactorial(int digit);
int isStrong(int number);

int main(void)
{
    int my_number=0;
    
    printf("\nEnter any number: ");
    scanf("%d", &my_number);
    
     if(isStrong(my_number) == 1)
        printf("\n%d is a STRONG NUMBER\n", my_number);
        else
        printf("\n%d is NOT a STRONG NUMBER\n", my_number);
        
    return 0;
}

int getFactorial(int digit)
{
	int i, fact=1;
	
	for(i= digit; i>=1; i--)
	fact*=i;
	
	return fact;
}

int isStrong(int number)
{
	int copy=number;
	int formedNumber=0;
	int extractedDigit=0;
	
	while(number!=0)
	{
		extractedDigit= number % 10;
		formedNumber+= getFactorial(extractedDigit);
		number/=10;
	}
	
	if(formedNumber == copy)
	return 1;
	
	return 0;
}
