//Write a C program to check whether a given integer is positive even, negative even, positive odd or negative odd. Print even if the number is 0.

#include <stdio.h>

int main(void) 
{
    int num;

    printf("\nEnter a number: ");
    scanf("%d", &num);

        if(num > 0)
		 {
		 	if(num % 2 == 0)
		 	printf("\nThe number is a positive even number.");
		 	
		 	else
		 	printf("\nThe number is a positive odd number.");
		 }
            
        else if(num < 0) 
         {
		 	if(num % 2 == 0)
		 	printf("\nThe number is a negative even number.");
		 	
		 	else
		 	printf("\nThe number is a negative odd number.");
		 } 
		 
		 else if(num == 0)
		 printf("\nThe number is an even number ");

    return 0;
}

