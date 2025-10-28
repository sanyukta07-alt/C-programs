//WRITE A PROGRAM TO CHECK WHETHER A USER GIVEN NUMBER IS ODD OR EVEN, USING CONDITIONAL OPERATOR.


#include <stdio.h>

void main()
{
	
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);
	(num % 2) == 0 ? printf("The number is even") : printf("The number is odd");
}

