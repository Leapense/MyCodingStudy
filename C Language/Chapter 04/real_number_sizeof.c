#include <stdio.h>

int main()
{
	float num1 = 0.0f;
	double num2 = 0.0;
	long double num3 = 0.0l;

	printf("float: %ld, double: %ld, long double: %ld\n",
		sizeof(float),
		sizeof(double),
		sizeof(long double)
	);

	return 0;
}