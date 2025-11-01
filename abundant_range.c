//Write a program in C to find the Abundant numbers (integers) between 1 and 1000.

#include <stdio.h>

int isAbundant(int n);

int main(void) 
{
    int range, flag = 0;
    
    printf("Abundant numbers between 1 and 1000:\n");
    for(range = 1; range <= 1000; range++)
    {
    	if (isAbundant(range) > range)
    	{
        	printf("%d ", range);
        	flag = 1;
	    }
    }    
    
    if(flag == 0)
    printf("No abundant numbers in the given range");
    
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
   
