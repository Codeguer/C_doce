#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int left = 0;
	int right = 0;
	char arr[] = "welcome to bitib ot emoclew";
	for (i = 0; ; i++)//������ĳ���
	{
		if ('\0' == arr[i])
		{
			break;
		}
	}
	/*
		i=strlen(arr);//���ַ��������󳤶�	
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
			if (left == right && j == right)continue;//������������ĸ�����
			printf("%c", arr[j]);
			
		}
		printf("\n");
	}

	return 0;
}