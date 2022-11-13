#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int n = 0,count=0;
	scanf("%d", &n);
	for(int i = 1;i<=32;i++)
	{
		if ((n & 1) == 1)
		{
			count++;
		}
		n >>= 1;
	}
	printf("%d\n", count);
	return 0;
}