#include <stdio.h>

int main()
{
	int num1 = 10;

	if (num1 == 10)
		printf("It's 10.\n");
	if (num1 != 5)
		printf("It's not 5.\n");
	if (num1 > 10)
		printf("It's bigger than 10.\n");
	if (num1 < 10)
		printf("It's smaller than 10.\n");
	if (num1 >= 10)
		printf("It's bigger than or equal to 10.\n");
	if (num1 <= 10)
		printf("It's smaller than or equal to 10.\n");

	return 0;
}