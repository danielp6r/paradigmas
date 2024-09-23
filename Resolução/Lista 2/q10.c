#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int pertence();

int main(int argc, char *argv[])
{
	srand(time(NULL));
	return pertence(0);
}

int pertence(int a)
{	
	int size=9, *arr;
	arr = (int *) malloc( size*sizeof(int) );

	for (int i=0; i<size; ++i)
		arr[i] = rand()/21474836;

	for (int i=0; i<size; ++i)
	{
		if ( arr[i] == a )
			return 1;
		printf("%i\n", arr[i]);
	}

	free (arr);
	return 0;
}

