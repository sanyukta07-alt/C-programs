#include <stdio.h>
int isPrime(int number);

int main(void)
{
	int upper,lower=0;
  printf("\nEnter the upper limit: ");
  scanf("%d", &upper);
  printf("\nEnter the lower limit: ");
  scanf("%d", &lower);
  printf("\nPrime numbers from range %d to %d is:\n", lower,upper);
  while(lower<upper)
  {
  	if(isPrime(lower)==1)
  	{
  		printf("%d ", lower);
  		lower++;
	  }
	  else
	  lower++;
  }
  printf("\n");
  return 0;
}

int isPrime(int number)
{
	int i,countFactors=0;
	for(i=1;i<=number;i++)
	{
		if(number%i==0)
		countFactors++;
	}
	if(countFactors==2)
	return 1;
	
 return 0;
}
