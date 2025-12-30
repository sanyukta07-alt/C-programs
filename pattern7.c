/* 
Enter the number of rows: 5
    *
   * *
  * * *
 * * * *
* * * * *

*/

#include <stdio.h>

int main(void)
{
	int n, i, j, k;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
    	for(j = n; j > i; j--)
        printf(" ");

    	for(k = 1; k <= i; k++)
        printf("* ");

    printf("\n");
	}
}
