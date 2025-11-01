//Write a program in C to find the Deficient numbers (integers) between 1 to 100

#include <stdio.h>

int isDeficient(int n);

int main(void) 
{
    int range, flag = 0;
    
    printf("Deficient numbers between 1 and 100:\n");
    for(range = 1; range <= 100; range++)
    {
    	if (isDeficient(range) < range)
    	{
        	printf("%d ", range);
        	flag = 1;
	    }
    }    
    
    if(flag == 0)
    printf("No Deficient numbers in the given range");
    
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
   
