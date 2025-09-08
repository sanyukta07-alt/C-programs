//C program to build a calculator app

#include <stdio.h>

int main(void)
{
	double first, second=0.00;
	int choice=0;
	printf("Enter first number: ");
	scanf("%lf", &first);
	printf("Enter second number: ");
	scanf("%lf", &second);
	
	printf("\nPress 1 for Addition");
	printf("\nPress 2 for Subtraction");
	printf("\nPress 3 for Multiplication");
	printf("\nPress 4 for Division");
	printf("\nPress 5 for Modulo-Division (Remainder)");
	printf("\nPress 6 to Exit");
	
	printf("\nEnter your choice: ");
	scanf("%d", &choice);
	
	switch (choice)
	{
		case 1:
			printf("\n%lf + %lf= %lf", first, second, (first + second));
			break;
			
		case 2:
			printf("\n%lf - %lf= %lf", first, second, (first - second));
			break;
			
		case 3:
			printf("\n%lf * %lf= %lf", first, second, (first * second));
			break;
			
		case 4:
			if(second!=0)
			printf("\n%lf / %lf = %lf", first, second, (first / second));
			else
			printf("\nDivision by Zero Error! ");
			break;
			
		case 5:
			if(second!=0)
			printf("\n%d % %d = %d", (int)first, (int)second, ((int)first % (int)second));
			else
			printf("\nDivision by Zero Error! ");
			break;
			
		case 6:
			printf("\nThank you for using the Calculator app. Please visit again.");
			break;
			
		default:
			printf("\nEnter choice in the range of (1-6)");
			
	}
	return 0;
}
