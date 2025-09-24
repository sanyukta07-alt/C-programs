//Write a C program that accepts two item’s weight and number of purchases (floating point values) and calculates their average value.

#include <stdio.h>

int main(void) 
{
    float weight1 = 0.0f, weight2= 0.0f;
    float count1 = 0.0f, count2 = 0.0f;
    float totalWeight = 0.0f, totalCount = 0.0f, average = 0.0f;

    printf("Enter weight of the first item: ");
    scanf("%f", &weight1);
    printf("Enter weight of the second item: ");
    scanf("%f", &weight2);

    printf("Enter number of purchases for first item: ");
    scanf("%f", &count1);
    printf("Enter number of purchases for second item: ");
    scanf("%f", &count2);

    // Calculating total weight and total count
    totalWeight = (weight1 * count1) + (weight2 * count2);
    totalCount = count1 + count2;

    // Calculating average
    average = totalWeight / totalCount;

    // Displaying result
    printf("\nThe average value = %f", average);

    return 0;
}

