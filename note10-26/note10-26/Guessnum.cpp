#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void menu()
{
	printf("***************\n");
	printf("*** 1.play ****\n");
	printf("*** 0.exit ****\n");
	printf("***************\n");
}
void game()
{
	int i = 0, num = 0;
	num = rand() % 100 + 1;

	while (1)
	{
		printf("请猜一个数字：");
		scanf("%d", &i);
		if (i > num)
		{
			printf("猜大了,再试一次\n");
		}
		else if (i < num)
		{
			printf("猜小了，再试一次\n");
		}
		else
		{
			printf("恭喜猜对了！\n");
			break;
		}
	}
}
int main()
{
	int input = 0;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
	return 0;
}
