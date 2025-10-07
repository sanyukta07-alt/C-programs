//C program to print all numbers between 1 and 100 which are divided by a specified number and the remainder will be 3.

#include <stdio.h>

int main(void)
{
	int i, number = 0;
	
	printf("Enter a Number: \n");
	scanf("%d", &number);
	
	if(number <= 3)
	
     printf("No numbers between 1 and 100 give remainder 3 when divided by %d.\n", number);
     
    else
	{
	 printf("Numbers between 1 and 100 which give remainder 3 when divided by %d are:\n", number);
	
	 for(i = 1; i <= 100; i++ )
	 {
		if(i % number == 3)
		printf("%d ", i);
	 }
    }  
	
	return 0;
}
