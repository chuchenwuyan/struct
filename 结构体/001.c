//什么是结构体？
//自定义的数据类型	很多数据组成的整体
//书写位置：
//函数内，只能在本函数内使用。
//函数外，所有函数中都能使用
#include <stdio.h>
#include <string.h>

struct people
{
	char name[100];
	int age;
	char gender;
	double height;

};
int main()
{
	//使用结构体
	struct people people1;
	strcpy(people1.name, "chuchenwuyan");
	people1.age = 18;
	people1.gender = 'M';
	people1.height = 182;

	//输出打印
	printf("名字是%s\n",people1.name);
	printf("名字是%d\n", people1.age);
	printf("名字是%c\n", people1.gender);
	printf("名字是%lf\n", people1.height);

	struct people people2;
	strcpy(people2.name, "AAA");
	people2.age = 18;
	people2.gender = 'M';
	people2.height = 182;

	//输出打印
	printf("名字是%s\n", people2.name);
	printf("名字是%d\n", people2.age);
	printf("名字是%c\n", people2.gender);
	printf("名字是%lf\n", people2.height);

	return 0;
}