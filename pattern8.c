/* 
Enter the number of rows: 5
 * * * * *
  * * * *
   * * *
    * *
     *

*/

#include <stdio.h>

int main(void)
{
	int n, i, j, k;
	printf("Enter the number of rows: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++)
	{
    	for(j = 1; j < i; j++)
        printf(" ");

    	for(k = 0; k < n - i + 1; k++)
        printf("* ");

    printf("\n");
	}
}
