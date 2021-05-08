#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10] = "Hello";
	char s2[10];

	strcpy(s2, s1);
	printf("💬 Copying String s2 to s1...\n");
	printf("💬 s2 = %s\n", s2);

	return 0;
}