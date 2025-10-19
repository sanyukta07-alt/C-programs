/*Write a C program to display the minimum and maximum values of each of C's data types */

#include <stdio.h>
#include <limits.h>
#include <float.h>

int main(void)
{
	printf("\nSigned char (MIN): %d, Signed char (MAX): %d", CHAR_MIN, CHAR_MAX);
	printf("\nUnsigned char (MIN): %d, Unsigned char (MAX): %u", 0, UCHAR_MAX);
	
	printf("\nSigned short (MIN): %d, Signed short (MAX): %d", SHRT_MIN, SHRT_MAX);
	printf("\nUnsigned short (MIN): %d, Unsigned short (MAX): %u", 0, USHRT_MAX);
	
	printf("\nSigned int (MIN): %d, Signed int (MAX): %d", INT_MIN, INT_MAX);
	printf("\nUnsigned int (MIN): %d, Unsigned int (MAX): %u", 0, UINT_MAX);
	
	printf("\nSigned long (MIN): %ld, Signed long (MAX): %ld", LONG_MIN, LONG_MAX);
	printf("\nUnsigned long (MIN): %ld, Unsigned long (MAX): %lu", 0L, ULONG_MAX);
	
	printf("\nSigned long long (MIN): %lld, Signed long long (MAX): %lld", LLONG_MIN, LLONG_MAX);
	printf("\nUnsigned long (MIN): %lld, Unsigned long (MAX): %llu", 0LL, ULLONG_MAX);
	
	printf("\nfloat (MIN): %.10e, float (MAX): %.10e", FLT_MIN, FLT_MAX);
	printf("\ndouble (MIN): %.10e, double (MAX): %.10e", DBL_MIN, DBL_MAX);
	printf("\nlong double (MIN): %.10Le, long double (MAX): %.10Le", LDBL_MIN, LDBL_MAX);
	
	return 0;
}
