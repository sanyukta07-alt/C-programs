//Write a C program to check if a given number is ARMSTRONG OR NOT.

#include <stdio.h>
#include <math.h>
int countDigits(int number);
int isArmstrong(int number);

int main(void)
{
    int my_number=0;
    int copy=0;
    
    printf("\nEnter any number: ");
    scanf("%d", &my_number);
    copy=my_number;
    
     if(isArmstrong(my_number) == 1)
        printf("\n%d is an ARMSTRONG NUMBER\n", copy);
        else
        printf("\n%d is NOT an ARMSTRONG NUMBER\n", copy);
    return 0;
}


int countDigits(int number)
{
    int count = 0;
    while(number!=0)
    {
    	++count;
    	number/=10;
	}
    return count;
}

int isArmstrong(int number)
{
	int digit, total=0;
	int digitCount=countDigits(number);
	int num=number;
	
	while(number!=0)
	{
		digit=number%10;
		total+= (int)pow(digit, digitCount);
		number/=10;
	}
	
	printf("\nGenerated Total= %d", total);
	if(total==num)
	return 1;
	
	return 0;
}
