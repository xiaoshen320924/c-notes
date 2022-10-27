#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void menu()
{
	printf("***************\n");
	printf("*** 1.play ****\n");
	printf("*** 0.exit ****\n");
	printf("***************\n");
}
int main()
{
	int input = 0;
	do
	{
		menu();
		printf("请选择：>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			break;
		case 0:
			break;
		default:
			printf("输入错误，请重新输入\n");
			break;
		}
	} while (input);
}