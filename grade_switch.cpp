#include <stdio.h>

int main(void)
{
	int marks;
	printf("Enter your marks: ");
	scanf("%d", &marks);
	
	int mod = marks/10;
	
	switch(mod)
	{
		case 10: printf("Grade O");
		case 9: printf("Grade O");
				break;
		
		case 8: printf("Grade E");
				break;
				
		case 7: printf("Grade A");
				break;
				
		case 6: printf("Grade B");
				break;
				
		case 5: printf("Grade C");
				break;
				
		case 4: printf("Grade D");
				break;
				
		default: printf("FAIL");
	}
}
