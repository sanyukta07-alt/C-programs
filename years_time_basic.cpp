//C program to convert a given integer (in days) to years, months and days, assuming that all months have 30 days and all years have 365 days.

#include <stdio.h>

int main(void)
{
	int years = 0;
	int months = 0;
	int days = 0;
    int time = 0;
    
    printf("Enter number of days: ");
    scanf("%d", &time);
    
    if(time >= 0)
    {
    years = time / 365;
    months = (time % 365) / 30;
    days = (time % 365) % 30; 
    
    printf("\nYears:  %d\nmonths:  %d\ndays:  %d", years, months, days);
    }
    
    else
    printf("Invalid Input. Enter a positive number");
    
    return 0;
}
