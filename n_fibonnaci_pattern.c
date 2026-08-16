#include <stdio.h>

void main()
{
    int a,b,c,n,i,j;
	printf("Enter no. of lines: ");
    scanf("%d", &n);
    for(i=1; i<=n; i++)
    {
    	a=0;
    	b=1;
        for(j=1; j<=i; j++)
        {
            printf("%d ", a);
            c=a + b;
            a=b;
            b=c;
        }
        printf("\n");
    }
}
