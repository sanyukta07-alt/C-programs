/*
Enter the number of rows: 4
      1
    1 2 1
  1 2 3 2 1
1 2 3 4 3 2 1
  1 2 3 2 1
    1 2 1
      1
*/
	  
#include <stdio.h>

int main(void)
{
    int i, j, k, n ;

    printf("Enter the number of rows: ");
    scanf("%d", &n);
    
    for(i = 1; i <= n; i++)
    {
        for(j = 1; j <= n - i; j++)
            printf("  ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(k = i - 1; k >= 1; k--)
            printf("%d ", k);

        printf("\n");
    }

    for(i = n - 1; i >= 1; i--)
    {
        for(j = 1; j <= n - i; j++)
            printf("  ");

        for(j = 1; j <= i; j++)
            printf("%d ", j);

        for(k = i - 1; k >= 1; k--)
            printf("%d ", k);

        printf("\n");
    }

    return 0;
}

