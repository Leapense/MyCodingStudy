#include <stdio.h>
#include <string.h>

int main()
{
	char s1[20];
	char s2[20];

	printf("⚠️ Input two String Values: ");
	scanf("%s %s", s1, s2);

	int ret = strcmp(s1, s2);
	if (ret == 0) {
		printf("💬 Two String are Same.\n");
	}
	else if (ret > 0) {
		printf("💬 %s < %s\n", s2, s1);
	}
	else {
		printf("💬 %s < %s\n", s1, s2);
	}

	return 0;
}