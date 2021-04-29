#include <stdio.h>

int main()
{
	int numArr[3][4] = {
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{99, 110, 121, 132}
	};

	printf("%d\n", sizeof(numArr));
	printf("%d\n", sizeof(numArr[0]) / sizeof(int));
	printf("%d\n", sizeof(numArr) / sizeof(numArr[0]));

	return 0;
}