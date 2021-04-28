#include <stdio.h>

int main()
{
	int* a;
	int num1 = 10;

	a = &num1;

	printf("%p\n", a);
	printf("%p\n", &num1);

	return 0;
}