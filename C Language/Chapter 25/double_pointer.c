#include <stdio.h>

int main()
{
	int* a;
	int** aa;
	int num1 = 10;

	a = &num1;
	aa = &a;

	printf("%d\n", **a);

	return 0;
}