#include <stdio.h>

int main(int argc, char *argv[])
{
	unsigned long long int a=0,j=0;
	printf("number: ");
	scanf("%lli", &a);

	for (unsigned int i = 1; i<a/2+1; ++i)
	{
		if ( a % i == 0 )
			j += i;
		if ( j == a ) {
			printf("y\n");
		return 0;
        }
	}
	printf("n\n");
	
	return 0;
}
