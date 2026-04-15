//结构体的嵌套
#include <stdio.h>
#include <string.h>

typedef struct message
{
	long long phone_number;
	char email[100];
}M;

typedef struct student
{
	char name[100];
	int age;
	M contact;
}S;

int main()
{
	S people;
	strcpy(people.name, "zhangsan");
	people.age = 18;
	people.contact.phone_number = 12345678911LL;
	strcpy(people.contact.email,"12345@gmail.com");

	printf("name:%s,age:%d,pn:%lld,email:%s\n", people.name, people.age, people.contact.phone_number, people.contact.email);
	return 0;
}