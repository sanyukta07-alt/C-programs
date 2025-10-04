//Write a C program that reads two integers and checks whether they are multiplied or not

#include <stdio.h>

int main(void) 
{
    int a, b;

    printf("Enter 1st integer: ");
    scanf("%d", &a);

    printf("Enter 2nd integer: ");
    scanf("%d", &b);
    
    if (a == 0 || b == 0) 
        printf("Zero cannot be used for multiple check.");
  
    else if (a % b == 0 || b % a == 0) 
        printf("They are multiples of each other.\n");

    else 
        printf("They are not multiples of each other.\n");

    return 0;
}

