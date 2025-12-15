//SUM  OF DIGITS USING WHILE LOOP

#include <stdio.h>

int main(void)
{
  int d, num, sum = 0;
  printf("Enter a number: ");
  scanf("%d", &num);

  while(num > 0)
  {
    d = num% 10;
    sum = sum + d;
    num/=10;
  }

  printf("Sum of the digits is %d.", sum);
}


