//Write a C program to calculate the distance between two points.

#include <stdio.h>
#include <math.h>   

int main(void) 
{
    float x1, y1, x2, y2;
	float distance = 0.0f;

    printf("Enter coordinates of first point (x1 y1): ");
    scanf("%f %f", &x1, &y1);

    printf("Enter coordinates of second point (x2 y2): ");
    scanf("%f %f", &x2, &y2);

    distance = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    printf("Distance between the points: %f\n", distance);

    return 0;
}

