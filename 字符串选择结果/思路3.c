#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strcat().string catenate,�ַ������ӣ�
//strncat()
//strstr()�жϸ��ַ����Ƿ�Ϊ�Ӵ�
//ÿ����������һ��ָ��ָ��strCharSet���ַ����е�һ�γ��ֵ�λ�ã�
//���strCharSetû�г������ַ������򷵻�NULL��
//���strCharSetָ��һ������Ϊ0���ַ������������ظ��ַ�����
//	char arr[20] = "hello";
//	hello bit\0
//	strcat(arr, "bit");
//	strcat(arr, arr);������������Լ����Լ�����
//	strncat(arr, arr, 5);������������Լ����Լ����ӣ���Ҫָ�����Ӽ����ַ�

//ABCDA
//BCDAA
//CDAAB
//DAABC
//AABCD
//AABCDAABCD
int is_string_rotate(char* str1, char* str2)
{
	//���Ȳ���ȣ��϶�������ת�õ���
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}

	//1. str1�ַ����ĺ��׷��һ��str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2. �ж�str2�Ƿ�Ϊstr1���ִ�
	char* ret = strstr(str1, str2);
	return ret != NULL;
	/*if (ret == NULL)
	{
		return 0;
	}
	else
	{
		return 1;
	}*/
	//AABCDAABCD 
	//BCD
}
int main()
{
	char arr1[20] = "AABCD";
	char arr2[] = "BCDAA";
	int ret = is_string_rotate(arr1, arr2);
	if (ret == 1)
	{
		printf("yes\n");
	}
	else
	{
		printf("no\n");
	}

	return 0;
}
