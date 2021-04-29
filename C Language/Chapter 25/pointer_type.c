#include <stdio.h>

int main()
{
	long long* a;
	float* b;
	char* c;

	long long num1 = 10;
	float num2 = 3.5f;
	char c1 = 'a';

	a = &num1;
	b = &num2;
	c = &c1;

	printf("%lld\n", *a);
	printf("%f\n", *b);
	printf("%c\n", *c);

	return 0;
}