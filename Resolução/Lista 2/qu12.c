#include <stdio.h>
/*
de acordo com
https://cpf.inf.br/como-funciona
*/

int main(int argc, char *argv[])
{
	long int cpf = 48715724042;
	int mult=10;
	short int digito10=0, digito11=0;

	for (long int i=10000000000, deno=10; i>10; i/=10)
	{
		while ( (cpf/i)%deno > 9 )
		{
			deno/=10;
		}
		digito10 += ((cpf/i)%deno)*mult;

		deno*=10;
		--mult;
	}

	mult = 11;
	for (long int i=10000000000, deno=10; i>1; i/=10)
	{
		while ( (cpf/i)%deno > 9 )
		{
			deno/=10;
		}
		digito11 += ((cpf/i)%deno)*mult;

		deno*=10;
		--mult;
	}
	//printf("%i\n", 11-digito10%11);
	//printf("%i\n", 11-digito11%11);

	if ( 11-digito10%11 == cpf/10%10 && 11-digito11%11 == cpf%10)
	{
		printf("y\n");
		return 0;
	}
	printf("n\n");
	return 0;
}
