#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//while��� for��� do while���
	//break continue,��ֹ�˴�ѭ������������Ĵ��룬����Ĵ��벻��ִ�У����´�ѭ������ڽ����жϣ�
	/*int n = 1;
	while (n <= 10) {
		if (n == 5) {
			n++;
			continue;
		}
		printf("%d ", n);
		n++;
	}*/

	//putchar  getchar
	//char ch = 0;
	//ch=getchar();//����һ���ַ������ص���ASCI��ֵ
	//putchar(ch);//���һ���ַ�

	//int ch = 0;
	//while (getchar() != '\n') {
	//	;
	//}//�������֮�� \n֮��Ĳ���
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	////getchar �ͼ���֮�����  ���뻺����
	////���뻺������������ʱһ����ȡһ���ַ� A\n ��Aȡ����ֵ��ch ����\n ��A���� ����
 //   //sacnf �����ո�\n������ȡ  ������getcahr()��ȡ 
	////getchar ��������


	//for(���ʽ1�����ʽ2�����ʽ3)1����ʼ����2���жϣ�3������
	int i=0,j=0;
	int sum = 0; 
	int n = 0;
	int ret = 1;
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		ret = 1;
		for (j = 1; j <=i; j++)
		{
			ret = ret * j; 
		}
		sum = sum + ret;
	}
	printf("%d", sum);
	return 0;
}