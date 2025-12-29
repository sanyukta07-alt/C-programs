/*  * * * * *
	* * * *
	* * *
	* *
	*
*/

#include <stdio.h>

int main(void)
{
	int n;
	printf("Enter a number: ");
	scanf("%d", &n);
	
	int row, col, temp =1 ;
	for(row = 1; row <= n; row++)
	{
		for(col = n; col >= row; col--)
		{
			printf("* ");
		}
		printf("\n");	
	}
return 0;
}
