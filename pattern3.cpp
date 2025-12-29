/*

*
* *
* * *
* * * *
* * * * *

*/

#include <stdio.h>

int main(void)
{
	int n;
	printf("ENTER THE NUMBER: ");
	scanf("%d", &n);
	
	int row, col;
	for(row = 1; row<= n; row++) 
	{
		for(col = 1; col <= row; col++)
		{
			printf("* ");
		}
		printf("\n");
	}
	return 0;
}




