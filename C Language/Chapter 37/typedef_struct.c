﻿#include <stdio.h>
#include <string.h>

typedef struct _Person {
	char name[20];
	int age;
	char address[100];
} Person;

int main()
{
	Person p1;

	strcpy(p1.name, "Test");
	p1.age = 30;
	strcpy(p1.address, "Address");

	printf("📝 name: %s\n", p1.name);
	printf("📝 age: %d\n", p1.age);
	printf("📝 address: %s\n", p1.address);

	return 0;
}