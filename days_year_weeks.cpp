//Write a C program to convert specified days into years, weeks and days (Note: Ignore Leap Year).

#include <stdio.h>

int main() 
{
    int days, years = 0;
    int weeks = 0;
    int remainingDays = 0;
    int temp = 0;

    printf("Enter the number of days: ");
    scanf("%d", &days);

    // Calculating years, weeks, and remaining days
    temp = days;
    years = days / 365;
    days = days % 365;
	weeks = days / 7;
    remainingDays = days % 7;

    // Displaying the results
    if(years> 1)
    printf("\n%d days is %d years, %d weeks, and %d days.", temp, years, weeks, remainingDays);
    else
    printf("\n%d days is %d year, %d weeks, and %d days.", temp, years, weeks, remainingDays);

    return 0;
}

