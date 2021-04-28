#include <stdio.h>

int main()
{
	int* a;
	int num1 = 10;

	a = &num1;

	*a = 20;

	printf("%d\n", *a);
	printf("%d\n", num1);

	return 0;
}