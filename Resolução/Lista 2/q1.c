#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long long int n;
	printf("numero entre [1 ,20]: ");
	scanf("%lld", &n);
	if (n == 0)
	{
		printf("1\n");
		return 0;
	}
	for (unsigned long long int i = n-1; i>0; --i)
	{
		n *= i;
	}
	printf("n: %lld\n", n);
	return 0;
}
