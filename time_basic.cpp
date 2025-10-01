//Write a C program to convert a given integer (in seconds) to hours, minutes and seconds.

#include <stdio.h>

int main(void)
{
    int hours = 0;
    int mins = 0;
    int seconds = 0;
    int time = 0;
    
    printf("Enter an integer (in seconds): ");
    scanf("%d", &time);
    
    hours = time / 3600;        
    mins = (time % 3600) / 60;  
    seconds = time % 60;        
    
    printf("\nHours : %d\nMinutes : %d\nSeconds : %d", hours, mins, seconds);
    
    return 0;
}

