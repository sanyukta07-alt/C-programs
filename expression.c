#include <stdio.h>

void main()
{
	int x;
	int sol = 0;
	
	printf("Enter a number: ");
	scanf("%d", &x);
	
	sol = (x*x*x) + (2*x) + 5;
	
	printf("Value of f(x): %d", sol);
}
