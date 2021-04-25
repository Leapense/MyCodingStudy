#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	char c1 = 'a';

	if (num1 >= 0.09f)
		printf("It's greater than or equal to 0.09\n");
	if (c1 == 'a')
		printf("It's equal to a\n");
	if (c1 == 97)
		printf("It's equal to 97\n");
	if (c1 < 'b')
		printf("It's smaller than b\n");

	return 0;
}