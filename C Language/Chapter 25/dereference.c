#include <stdio.h>

int main()
{
	int* a;
	int num1 = 10;

	a = &num1;

	printf("%d\n", *a);

	return 0;
}