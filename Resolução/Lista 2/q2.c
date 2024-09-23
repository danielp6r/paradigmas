#include <stdio.h>

unsigned long long int factorial(unsigned int n)
{
	if ( n < 1 )
		return 1;
	if ( n > 2 )
		return n * factorial(n-1);
}

int main(int argc, char *argv[])
{
	printf("numero entre [0, 20]: ");
	unsigned int n;
	scanf("%i", &n);
	printf("%lli\n", factorial(n));
	return 0;
}
