/*
1
2 2
3 3 3
4 4 4 4
5 5 5 5 5
*/

#include <stdio.h>

int main (void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int row, col;
	for(row = 1; row<=n; row++)
	{
		for(col=1; col<=row; col++)
		{
			printf("%d ", row);
		}
		printf("\n");
	}
}
