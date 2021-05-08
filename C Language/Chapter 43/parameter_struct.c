#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

void printPerson(struct Person p)
{
	printf("name: %s\n", p.name);
	printf("age: %d\n", p.age);
	printf("address: %s\n", p.address);
}

int main()
{
	struct Person p1;

	strcpy(p1.name, "Test");
	p1.age = 30;
	strcpy(p1.address, "Address");

	printPerson(p1);

	return 0;
}