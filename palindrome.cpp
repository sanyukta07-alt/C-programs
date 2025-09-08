//C program to check if a given number is PALINDROME or not.

#include <stdio.h>

int getReverse(int number);
int isPalindrome(int number);

int main(void)
{
	int my_number=0;
	int copy=0;
	
	printf("\nEnter any number: ");
	scanf("%d", &my_number);
	copy=my_number;
	
	if(isPalindrome(my_number) == 1)
	printf("\n%d is a PALINDROME NUMBER", copy);
	else
	printf("\n%d is NOT a PALINDROME NUMBER", copy);
	
	return 0;
}

int getReverse(int number)
{
	int digit=0;
	int reverse=0;
	
	while(number != 0)
	{
		digit= number % 10;
		reverse= (reverse * 10) + digit;
		number/=10;
	}
	
	return reverse;
}

int isPalindrome(int number)
{
	int reverse = getReverse(number);
	if(reverse == number)
	return 1;
	
	return 0;
}
