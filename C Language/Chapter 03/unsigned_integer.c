#include <stdio.h>

int main()
{
	unsigned char a = 200;
	unsigned short b = 40000;
	unsigned int c = 600000;
	unsigned long d = 8000000;
	unsigned long long e = 100000000;

	printf("%u %u %u %lu %llu\n", a, b, c, d, e);

	return 0;
}