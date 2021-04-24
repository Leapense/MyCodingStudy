#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	double num2 = 0.3;
	long double num3 = 0.5l;

	printf("%f %f %Lf\n", num1, num2, num3);

	return 0;
}