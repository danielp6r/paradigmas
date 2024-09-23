#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));
	unsigned int a;//sorteio
	unsigned short int b = 25;//qtde de primes para encontrar
	unsigned int d = 0;//qtde de sorteios
	for ( ; b>0 ; )
	{
		unsigned short int c = 0;
		a = rand()/21474836;
		++d;
		for ( int j=2; j<=a/2; ++j )
		{
			if ( a%j == 0 )
			{
				++c;
				break;
			}
		}
		if ( c < 1 )
			--b;
	}
	printf("quantidade: %i\n", d);
	return 0;
}
