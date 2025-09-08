/*C program to check if a given number is AUTOMORPHIC or not.
  Automorphic Number is one whose square ends with itself.
*/

#include <stdio.h>
#include <math.h>

int countDigits(int number);
int isAutomorphic(int number);

int main(void)
{
	int my_number=0;
	
    printf("\nEnter any number: ");
    scanf("%d", &my_number);
    
     if(isAutomorphic(my_number) == 1)
        printf("\n%d is an AUTOMORPHIC NUMBER\n", my_number);
        else
        printf("\n%d is NOT an AUTOMORPHIC NUMBER\n", my_number);
        
    return 0;
}

int countDigits(int number)
{
    int count = 0;
    while(number!=0)
    {
    	++count;
    	number/=10;
	}
    return count;
}

int isAutomorphic(int number)
{
	int square= (int)pow(number,2);
	int digitCount = countDigits(number);
	int formedNumber= square % (int)pow(10, digitCount);
	
	if(formedNumber == number)
	return 1;
	
	return 0;
}
