#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int is_leapyear(int year)
{
	if (year % 400 == 0)
	{
		return 1;
	}
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
			return 0;
		else
			return 1;
	}
	else
	{
		return 0;
	}
}

int main()
{
	int year = 0;
	int month = 0;
	int input = 0;
	while (scanf("%d %d", &year, &month) == 2)
	{
		switch (month)
		{
		case 1:
		case 3:
		case 5:
		case 7:
		case 8:
		case 10:
		case 12:
			printf("%d\n", 31);
			break;
		case 2:
			if (is_leapyear(year) == 1)
			{
				printf("%d\n", 29);
			}
			else
			{
				printf("%d\n", 28);
			}
			break;
		default:
			printf("%d\n", 30);
		}
	}

	return 0;
}