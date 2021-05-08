#include <stdio.h>

void swapNumber(int* first, int* second)
{
	int temp;

	temp = *first;
	*first = *second;
	*second = temp;
}

int main()
{
	int num1 = 10;
	int num2 = 20;

	swapNumber(&num1, &num2);

	printf("✅ num1 = %d\n", num1);
	printf("✅ num2 = %d\n", num2);

	return 0;
}