//Write a C program that accepts three integers and finds the maximum of three.

#include <stdio.h>

int max_number(int n1, int n2, int n3);

int main(void)
{
	int num1, num2, num3;
	int max = 0;
	
	printf("Enter first number: ");
	scanf("%d", &num1);
	
	printf("Enter second number: ");
	scanf("%d", &num2);
	
	printf("Enter third number: ");
	scanf("%d", &num3);
	
	max = max_number(num1, num2, num3);
	
	printf("The maximum number among the three is %d", max);
	
	return 0;	
}

int max_number(int n1, int n2, int n3)
{
	int maximum = n1;
	
    if (n2 > maximum) 
        maximum = n2;
    if (n3 > maximum) 
        maximum = n3;
    
    return maximum;
}
