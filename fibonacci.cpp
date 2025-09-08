//C program to generate the first N Fibonnaci terms.

#include <stdio.h>

int main(void)
{
	int i, N=0;
	int first_term=0;
	int second_term=1;
	int next_term=0;
	
	printf("\nEnter number of terms: ");
	scanf("%d", &N);
	
	if(N>1)
	{
		printf("\nFirst %d Fibonacci Terms - ", N);
	    printf("%d %d ", first_term, second_term);
	    
	    for(i=3; i<=N; i++)
	    {
		next_term= first_term + second_term;
		printf("%d ", next_term);
		
        first_term= second_term;
        second_term=next_term;   
	    }
	}
	
	else if(N==1)
	printf("\nFirst Fibonacci term: %d", first_term);
	
	else if(N==0)
	printf("Please enter number greater than 1");
	
	printf("\n");
	return 0;
}
