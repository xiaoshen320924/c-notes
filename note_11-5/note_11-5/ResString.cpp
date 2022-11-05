#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int Strlen(char* str)
{
	int count = 0;
	while (*str != '\0')
	{
		count++;
		str++;
	}
	return count;
}

void reverse_string(char* arr)
{
	int len = Strlen(arr);
	char temp = *arr;
	*arr = *(arr + len - 1);
	*(arr + len - 1) = '\0';
	if (Strlen(arr + 1) >= 2)
		reverse_string(arr + 1);
	*(arr + len - 1) = temp;
}

int main()
{
	char arr[] = "abcdef";
	reverse_string(arr);
	printf("%s", arr);
	return 0;
}