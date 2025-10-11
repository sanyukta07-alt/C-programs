//C program that finds all integer numbers that divide by 7 and have a remainder of 2 or 3 between two given integers.

#include <stdio.h>

int main(void)
{
	int num1, num2, temp, i, found = 0;
	int n = 0;
	
	printf("Enter two integer numbers: ");
	scanf("%d %d", &num1, &num2);
	
	if(num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
	printf("\nInteger numbers that divide by 7 and have a remainder of 2 or 3 between %d and %d are \n", num1, num2);
	
	for(i = num1 + 1; i < num2; i++)
	{
		if(i % 7 == 2 || i % 7 == 3)
		{
			printf("%d ", i);
			found = 1;
		}
	}
	
	if (!found) 
        printf("\nNo numbers found in the given range.");
        
	printf("\n");
	
	return 0;
}
