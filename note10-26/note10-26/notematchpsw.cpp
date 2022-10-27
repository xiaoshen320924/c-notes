#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//int main()
//{
//	int i = 0;
//	int flag = 0;
//	char password[20] = { 0 };
//	for (i = 0; i < 3; i++)
//	{
//		printf("请输入密码：\n");
//		scanf("%s", password);
//		//判断两个字符串是否相等，用strcmp函数
//		//int ret=strcmp(password,"123456")
//		//如果第一个字符串等于第二个 返回0，小于第二个 返回<0的数字
//		if (0 == strcmp(password, "123456")) {
//			printf("success\n");
//			flag = 1;
//			break;
//		}
//		else
//		{
//			printf("%d failed\n",i+1);
//		}
//	}
//	if (flag == 0)
//	{
//		printf("failed");
//	}
//	return 0;
//}