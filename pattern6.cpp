/*
1
2 3
4 5 6
7 8 9 10
*/

#include <stdio.h>

int main (void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int row, col, temp = 1;
	for(row = 1; row<=n; row++)
	{
		for(col=1; col<=row; col++)
		{
			printf("%d ", temp++);
		}
		printf("\n");
	}
}

