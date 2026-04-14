//结构体作为函数参数
#include <stdio.h>
#include <string.h>


typedef struct student
{
	char name[100];
	int age;
}S;

void method(S *ptr);	//因为该函数用到了结构体，所以必须写在结构体下

int main()
{
	//定义
	S student;

	//给学生赋值
	strcpy(student.name,"zhangsan");
	student.age = 18;

	method(&student);

	printf("%s,%d\n",student.name,student.age);

	return 0;
}
void method(S *ptr)
{
	printf("名字");
	scanf("%s", ptr->name);
	printf("年龄");
	scanf("%d",&(ptr->age));
	printf("修改后的名字%s，年龄%d", ptr->name, ptr->age);
}