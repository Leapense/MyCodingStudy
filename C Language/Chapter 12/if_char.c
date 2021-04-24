#include <stdio.h>

int main()
{
	float num1 = 0.1f;
	char c1 = 'a';

	if (num1 == 0.1f)
		printf("It's 0.1.\n");
	if (c1 == 'a')
		printf("It's 'a'.\n");
	if (c1 == 97)
		printf("It's 'a'.\n");

	return 0;
}