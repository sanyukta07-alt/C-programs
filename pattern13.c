/*
Enter no. of lines: 5
* * * * * * * * *
  * * * * * * *
    * * * * *
      * * *
        *
*/

#include <stdio.h>
void main()
{
    int i, j, k, n;

    printf("Enter no. of lines: ");
    scanf("%d", &n);

    for (i = n; i>=1; i--)
    {
        for (j = n-i; j >=1; j--)
        {
        	printf("  ");
		}
		
        for (k = 1; k <= 2*i-1; k++)
        {
        	 printf("* ");	
		}
        printf("\n");
    }
}
