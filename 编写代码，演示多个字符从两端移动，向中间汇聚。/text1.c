#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int left = 0;
	int right = 0;
	char arr[] = "welcome to bitib ot emoclew";
	for (i = 0; ; i++)//求数组的长度
	{
		if ('\0' == arr[i])
		{
			break;
		}
	}
	/*
		i=strlen(arr);//用字符串函数求长度	
	*/
	right = i - 1;
	for (; left <= right; right--, left ++)
	{
		int j = 0;
		for (j = 0; j <= left; j++)
		{
			printf("%c", arr[j]);
		}
		for (j = left + 1; j <= right - 1; j++)
		{
			printf("*");
		}
		for (j = right; j <=i-1; j++)
		{
			if (left == right && j == right)continue;//处理奇数个字母的情况
			printf("%c", arr[j]);
			
		}
		printf("\n");
	}

	return 0;
}