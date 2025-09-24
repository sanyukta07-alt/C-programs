//c program to compute the perimeter and area of a rectangle with a height of 7 inches and width of 5 inches.

#include <stdio.h>

int main() 
{
    int height = 7;
    int width = 5;
    int perimeter = 0;
	int area = 0;

    // Calculating perimeter and area
    perimeter = 2 * (height + width);
    area = height * width;

    // Displaying results
    printf("Height of rectangle = %d inches\n", height);
    printf("Width of rectangle  = %d inches\n", width);
    printf("Perimeter of rectangle = %d inches\n", perimeter);
    printf("Area of rectangle = %d square inches\n", area);

    return 0;
}
