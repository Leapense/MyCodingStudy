#include <stdio.h>

int main()
{
	char num1 = 128;
	unsigned char num2 = 256;

	printf("%d %u\n", num1, num2);

	return 0;
}

/*
오버플로우: 기억 범위의 최댓값에서 넘어서게 되는 현상
언더플로우: 기억 범위의 최솟값에서 넘어서지 못하게 되는 현상
*/