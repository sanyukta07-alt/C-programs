//WRITE A PROGRAM TO FIND IF THE YEAR GIVEN IS LEAP YEAR OR NOT.

#include <stdio.h>

int main(void)
{
	int year;

	printf("Enter a year: ");
	scanf("%d", &year);

	(year % 400 == 0) || ((year % 100 != 0) && (year % 4 == 0)) ? printf("It is a leap year") : printf("It is not a leap year");
}

