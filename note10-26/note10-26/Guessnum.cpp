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
		printf("���һ�����֣�");
		scanf("%d", &i);
		if (i > num)
		{
			printf("�´���,����һ��\n");
		}
		else if (i < num)
		{
			printf("��С�ˣ�����һ��\n");
		}
		else
		{
			printf("��ϲ�¶��ˣ�\n");
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
		printf("��ѡ��>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (input);
	return 0;
}
