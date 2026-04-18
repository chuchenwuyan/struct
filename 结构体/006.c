#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct spot
{
	char name[100];
	int count;
};
int main()
{
	struct spot arr[5] = { {"A",0},{"B",0},{"C",0},{"D",0} };

	//模拟投票
	srand(time(NULL));

	for (int i = 0; i < 80; i++)
	{
		int choose = rand() % 4;
		arr[choose].count++;		//让对应景点多一票
	}
	//找最大值
	int max = arr[0].count;
	for (int i = 0; i < 4; i++)	
	{
		struct spot temp = arr[i];
		if (temp.count > max)
		{
			max = temp.count;
		}
	}
	printf("%d\n",max);

	for(int i = 0;i < 4;i++)
	{
		struct spot temp = arr[i];
		printf("%s,%d\n",temp.name,temp.count);
	}
	return 0;
}