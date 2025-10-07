//C program that accepts 4 real numbers from the keyboard and prints out the difference between the maximum and minimum values of these four numbers

#include <stdio.h>

double max(double a, double b);
double min(double a, double b);

int main(void)
{
	double a = 0.00;
	double b = 0.00;
	double c = 0.00;
	double d = 0.00;
	double largest = 0.00;
	double smallest = 0.00;
	
	printf("\nEnter 4 real-numbers: ");
	scanf("%lf%lf%lf%lf", &a, &b, &c, &d);
	
	largest = max(max(a,b), max(c,d));
	smallest = min(min(a,b), min(c,d));
	
	printf("\nLargest Real Number = %.3lf\n", largest);
	printf("\nSmallest Real Number = %.3lf\n", smallest);
	printf("\nDifference = %.3lf\n", (largest - smallest));
	return 0;
}

double max(double a, double b)
{
	return (a > b) ? a : b;
}

double min(double a, double b)
{
	return (a < b) ? a : b;
}
