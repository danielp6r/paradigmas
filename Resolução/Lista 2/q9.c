#include <stdio.h>

long long int digits(long long int a, int b);

int main(int argc, char *argv[])
{	// Máximo de 19 dígitos.
	long long int num = 0;
	printf("Digite o número (max. 19 digit.). \n");
    scanf("%lli", &num);
	printf("%lli\n", digits(num, 1));
	return 0;
}

long long int digits(long long int a, int b)
{
	if ( a < 0 )
		a *= -1;
	if ( a/10 > 0 && a > 9)
		return digits(a/10, ++b);
	else
		return b;
}

