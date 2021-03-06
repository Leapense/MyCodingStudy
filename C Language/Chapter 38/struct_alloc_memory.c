#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

int main()
{
	struct Person* p1 = malloc(sizeof(struct Person));

	if (p1 == NULL)
	{
		printf("p1 is null!\n");
	}
	else
	{
		strcpy(p1->name, "Test");
		p1->age = 30;
		strcpy(p1->address, "Address");
		
		printf("📝 name: %s\n", p1->name);
		printf("📝 age: %d\n", p1->age);
		printf("📝 address: %s\n", p1->address);

		free(p1);
	}

	return 0;
}