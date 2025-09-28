/*Write a C program to calculate a bike’s average consumption from the given total distance (integer value) traveled (in km) and spent fuel (in liters, float
number – 2 decimal points).*/

#include <stdio.h>

int main(void) 
{
    int distance = 0;
    float fuel, average = 0.0f;

    printf("Input total distance in km: ");
    scanf("%d", &distance);

    printf("Input total fuel spent in litres: ");
    scanf("%f", &fuel);

    average = distance / fuel;

    printf("\nAverage consumption of the bike: %.2f", average);

    return 0;
}


