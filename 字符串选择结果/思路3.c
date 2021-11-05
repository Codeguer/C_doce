#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//strcat().string catenate,字符串连接，
//strncat()
//strstr()判断该字符串是否为子串
//每个函数返回一个指针指向strCharSet在字符串中第一次出现的位置，
//如果strCharSet没有出现在字符串中则返回NULL。
//如果strCharSet指向一个长度为0的字符串，函数返回该字符串。
//	char arr[20] = "hello";
//	hello bit\0
//	strcat(arr, "bit");
//	strcat(arr, arr);这个函数不可自己与自己连接
//	strncat(arr, arr, 5);这个函数可以自己与自己连接，需要指定连接几个字符

//ABCDA
//BCDAA
//CDAAB
//DAABC
//AABCD
//AABCDAABCD
int is_string_rotate(char* str1, char* str2)
{
	//长度不相等，肯定不是旋转得到的
	if (strlen(str1) != strlen(str2))
	{
		return 0;
	}

	//1. str1字符串的后边追加一个str1
	//AABCDAABCD
	int len = strlen(str1);
	strncat(str1, str1, len);
	//2. 判断str2是否为str1的字串
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
