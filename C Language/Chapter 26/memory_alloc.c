#include <stdio.h>
#include <stdlib.h>

int main()
{
	int num1 = 20;
	int* a;

	a = &num1;

	int* b = malloc(sizeof(int));

	printf("%p\n", a);
	printf("%p\n", b);

	free(b);
	return 0;
}