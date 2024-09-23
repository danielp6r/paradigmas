#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned int a = 0, b = 1, c=1;
	printf("%i\n%i\n", a, b);
	for (; c<2147483647 ;)//tamanho do tipo
	{
		printf("%d\n", c);
		a=b;
		b=c;
		c=a+b;
	}
	return 0;
}
