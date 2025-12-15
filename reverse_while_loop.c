//Reverse a number using while loop

#include <stdio.h>

int main(void)
{
    int d, num, rev = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    while(num > 0)
    {
      d = num % 10;
      rev = (10*rev) + d;
      num = num/10;
    }

    printf("The reversed form of the number is %d", rev);
}

