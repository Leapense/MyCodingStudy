#include <stdio.h>
#include <string.h>

int main()
{
	char* s1 = "Hello";
	char s2[10] = "Hello";

	printf("💬 String Length of s1 = %d\n", strlen(s1));
	printf("💬 String Length of s2 = %d\n", strlen(s2));

	return 0;
}