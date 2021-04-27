#include <stdio.h>

int main()
{
	int num1;

	scanf("%d", &num1);

	switch (num1)
	{
	case 1:
		printf("It's 1.\n");
		break;
	case 2:
		printf("It's 2.\n");
		break;
	default:
		printf("default\n");
		break;
	}

	return 0;
}