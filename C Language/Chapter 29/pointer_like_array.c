#include <stdio.h>
#include <stdlib.h>

int main()
{
	int* a = malloc(sizeof(int) * 10);

	a[0] = 10;
	a[9] = 20;

	printf("%d\n", a[0]);
	printf("%d\n", a[9]);

	free(a);

	return 0;
}