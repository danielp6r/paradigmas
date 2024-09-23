#include <stdio.h>

int fibonacci(unsigned int a, unsigned int b, unsigned int c);

int main(int argc, char *argv[])
{
	unsigned int a=0, b=1, c=1;
	printf("%i\n%i\n", a, b);
	fibonacci(a, b, c);
	return 0;
}

int fibonacci(unsigned int a, unsigned int b, unsigned int c)
{
	printf("%i\n", c);
	a = b; b = c; c = a+b;
	if ( c < 2147483647 )//tamanho do tipo
		fibonacci(a, b, c);
}
