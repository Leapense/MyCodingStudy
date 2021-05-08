#include <stdio.h>
#include <stdlib.h>

int* ten()
{
	int* a = malloc(sizeof(int));
	*a = 10;
	return a;
}

int main()
{
	int* b;
	b = ten();

	printf("▶️ %d\n", *b);

	free(b);

	return 0;
}