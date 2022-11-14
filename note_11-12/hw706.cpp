#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	int arr1[32] = { 0 };
//	int arr2[32] = { 0 };
//	int m = 31, k = 31;
//	for (int i = 1; i <= 32; i++)
//	{
//		if (i%2==0)
//		{
//			arr1[m] = (n & 1);
//			m--;
//		}
//		else
//		{
//			arr2[k] = (n & 1);
//			k--;
//		}
//		n >>= 1;
//	}
//	printf("奇数位：");
//	for (m = 0; m < 32; m++)
//	{
//		printf("%d", arr1[m]);
//	}
//	printf("\n");
//	printf("偶数位：");
//	for (m = 0; m < 32; m++)
//	{
//		printf("%d", arr2[m]);
//	}
//	return 0;
//}