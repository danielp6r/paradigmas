#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{
	srand(time(NULL));

	unsigned short int sorteio;//sorteio
	unsigned short int qtdPrime = 25;//qtde de primes para encontrar
	unsigned int countSorteio = 0;//qtde de sorteios necessarias p/ encontrar 25

	int * arr = (int *) malloc( qtdPrime*sizeof(int) );
					   //
	for ( int count=0, ia=0; qtdPrime>0 ; ++countSorteio)
	{
		SORTEIO:sorteio = rand()/21474836; if (sorteio == 0 ) goto SORTEIO;

		for (int denominador=2; denominador < (int)(sorteio/2)+1; ++denominador)
		{
			if ( sorteio % denominador == 0 )
			{
				++count;
				goto SORTEIO;
			}
		}
		--qtdPrime;
		for (int i=0; i<25; ++i)
		{
			if ( arr[i] == sorteio )
			{
				++qtdPrime;
				goto SORTEIO;
			}
		}

		arr[ia] = sorteio;
		++ia;
	}

	//mostra o conteudo do array de primes
	for (int i=0; i<25; ++i)
		printf("sor arr: %i\n", arr[i]);

	free (arr);
	return 0;
}

