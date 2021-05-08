#include <stdio.h>
#include <stdlib.h>

int main()
{
	char* s1 = malloc(sizeof(char) * 10);
	printf("✅ memory allocated as 10 Byte to s1\n");

	printf("Input the String Value ➡️ ");
	scanf("%s", s1);

	printf("✅ Your Input: %s\n", s1);

	free(s1);
	printf("✅ memory free to s1\n");

	return 0;
}