#include <stdio.h>

void main()
{
    int num, d =0;
    int even = 0, odd = 0;
    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
        d = num % 10;

        if(d%2==0)
        even++;
        else if(d%2 != 0)
        odd++;
        num/=10;
    }

    printf("\nEven digits: %d", even);
    printf("\nOdd digits: %d",odd);
}


