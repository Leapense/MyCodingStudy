#include <stdio.h>
#include <string.h>

struct Person {
	char name[20];
	int age;
	char address[100];
};

struct Person getPerson() {
	struct Person p;

	strcpy(p.name, "Test");
	p.age = 30;
	strcpy(p.address, "Address");

	return p;
}

int main() {
	struct Person p1;

	p1 = getPerson();

	printf("💬 name: %s\n", p1.name);
	printf("💬 age: %d\n", p1.age);
	printf("💬 address: %s\n", p1.address);

	return 0;
}