//Write a C program that reads two numbers and divides the first number by the second number. If division is not possible print “Division is not possible”.

#include <stdio.h>

int main(void)
{
    float num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%f %f", &num1, &num2);

    if (num2 == 0)
        printf("Division is not possible\n");
    else
    {
        result = num1 / num2;
        printf("Result = %.2f\n", result);
    }

    return 0;
}

