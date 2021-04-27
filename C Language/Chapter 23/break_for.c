#include <stdio.h>

int main()
{
	int num1 = 0;

	for (;;)
	{
		num1++;
		printf("%d\n", num1);

		if (num1 == 10)
			break;
	}

	return 0;
}