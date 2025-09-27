/*Write a C program that accepts an employee’s ID, total worked hours in a month and the amount he received per hour. 
Print the ID and salary(with two decimal places) of the employee for a particular month*/

#include <stdio.h>

int main(void) 
{
    int emp_id = 0;
    float hours, amount = 0.0f;
	float salary = 0.0f;

    printf("Enter the Employee's ID: ");
    scanf("%d", &emp_id);

    printf("Enter the total worked hours in a month: ");
    scanf("%f", &hours);

    printf("Enter the amount received per hour: ");
    scanf("%f", &amount);

    salary = hours * amount;

    printf("\nEmployee's ID: %d\n", emp_id);
    printf("Salary = %f\n", salary);

    return 0;
}

