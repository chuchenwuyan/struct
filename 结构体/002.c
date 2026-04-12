//结构体数组
#include <stdio.h>

struct student
{
	char name[100];
	int age;
};

int main()
{
	//1定义学生,同时进行赋值
	struct student one = { "zhangsan",18 };
	struct student two = { "lisi",19 };
	struct student three = {"wangwu",20};

	struct student arr[3] = { one,two,three };

	//打印
	for (int i = 0; i < 3; i++)
	{
		struct student temp =  arr[i];
		printf("%s,%d\n", temp.name,temp.age);
	}
	return 0;
}