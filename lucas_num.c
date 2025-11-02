//Write a program in C to display the first 10 lucus numbers

#include <stdio.h>

int main(void)
{
	int i, a = 2, b = 1;
	int c = 0;
	
	printf("The first 10 Lucas Numbers are: ");
	
	 for (i = 0; i < 10; i++) 
	 {
        printf("%d ", a);
        c = a + b; 
        a = b;
        b = c;
     }
     
    return 0;
    
}
