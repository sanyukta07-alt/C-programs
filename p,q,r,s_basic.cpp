/*Write a C program that accepts 4 integers p, q, r, s from the user where q, r and s are positive and p is even. If q is greater than r and s is greater
than p and if the sum of r and s is greater than the sum of p and q print “Correct values”, otherwise print “Wrong values”. */

#include <stdio.h>

int main(void)
{
	int p, q, r, s;
	
	printf("\nEnter an even number: ");
	scanf("%d", &p);
	
	printf("Enter 3 positive numbers: ");
	scanf("%d %d %d", &q, &r, &s);
	
    if ((p % 2 == 0) && (q > 0 && r > 0 && s > 0)) 
	{
        if ((q > r) && (s > p) && ((r + s) > (p + q))) 
            printf("\nCorrect values");
        else 
            printf("\nWrong values");
    }   
    
    else 
        printf("\nWrong values");
    
 return 0;
	
}
