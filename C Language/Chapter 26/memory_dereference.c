#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* a;
	a = malloc(sizeof(int));
	*a = 10;

	printf("%d\n", *a);

	free(a);

	return 0;
}