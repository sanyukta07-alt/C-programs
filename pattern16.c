/*
Enter no. of lines: 5
* * * * *
*       *
*       *
*       *
* * * * *
*/

#include <stdio.h>

void main()
{
    int i, j, k, n;

    printf("Enter no. of lines: ");
    scanf("%d", &n);

    for (i=1; i<=n; i++)
    {
        for (j=1; j<=n; j++)
        {
            if (i==1 || i==n || j==1 || j==n)
            {
            	printf("* ");
			}
               
            else
            {
            	printf("  ");
			}     
        }
        printf("\n");
    }
}
