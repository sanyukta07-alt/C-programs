#include <stdio.h>
void main()
{
    int n, num, i, count = 0;
	printf("Enter n: ");
    scanf("%d", &n);
    for(num = 1; count < n; num++)
    {
        for(i = 2; i <= num / 2; i++)
        {
            if(num % i == 0)
                break;
        }

        if(num > 1 && i > num / 2)
            count++;
    }

    printf("%d is the %dth prime number", num - 1, n);
}
