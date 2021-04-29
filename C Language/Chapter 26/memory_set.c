#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	long long* a = malloc(sizeof(long long));
	memset(a, 0x27, 8);

	printf("0x%llx\n", *a);

	free(a);

	return 0;
}