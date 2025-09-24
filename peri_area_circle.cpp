//c program to compute the perimeter and area of a circle with a given radius.

#include <stdio.h>

int main() 
{
    double radius = 0.00;
    double perimeter = 0.00;
	double area = 0.00;

    printf("Enter the radius of the circle: ");
    scanf("%lf", &radius);
    
    // Calculating perimeter and area
    perimeter = 2.00 * (22.00/7.00) * radius;
    area = (22.00/7.00) * (radius*radius);

    // Displaying results
    printf("Radius of the circle = %lf cm", radius);
    printf("\nPerimeter of the circle = %lf cm", perimeter);
    printf("\nArea of the circle = %lf square cm\n", area);

    return 0;
}
