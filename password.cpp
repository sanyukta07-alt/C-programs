/*C program to read a password until it is valid. For wrong password print “Incorrect password” and for correct password print, “Correct password” and quit the program. 
The correct password is 1234. */

#include <stdio.h>

int main(void)
{
	int pass, flag = 0;
	int correct = 1234;
	
	while(flag == 0)
	{
		printf("\nEnter a password: ");
	    scanf("%d", &pass);
	    
	  	if(pass == correct)
	  	{
	  		printf("Correct Password");
	  		flag = 1;
	  		break;
		}
		
		else
			printf("Incorrect Password\n");
			
	}
	
	return 0;
}
