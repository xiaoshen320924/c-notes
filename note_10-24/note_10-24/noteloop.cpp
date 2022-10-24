#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main() {
	//while语句 for语句 do while语句
	//break continue,终止此次循环，跳过后面的代码，后面的代码不再执行，到下次循环的入口进行判断；
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
	//ch=getchar();//输入一个字符，返回的是ASCI码值
	//putchar(ch);//输出一个字符

	//int ch = 0;
	//while (getchar() != '\n') {
	//	;
	//}//清除数据之后 \n之间的部分
	//while ((ch = getchar()) != EOF) {
	//	putchar(ch);
	//}
	////getchar 和键盘之间存在  输入缓冲区
	////输入缓冲区中有数据时一次拿取一个字符 A\n 将A取出赋值给ch 再拿\n 把A覆盖 换行
 //   //sacnf 遇到空格\n不会拿取  可以用getcahr()拿取 
	////getchar 清理缓冲区


	//for(表达式1；表达式2；表达式3)1：初始化，2：判断；3：调整
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