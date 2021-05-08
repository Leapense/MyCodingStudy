#include <stdio.h>

float realNumber()
{
	return 1.234567f;
}

int main()
{
	float num1;
	
	num1 = realNumber();
	
	printf("num1 ▶️ %f\n", num1);

	return 0;
}