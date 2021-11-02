#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//写一个函数打印arr数组的内容，不使用数组下标，使用指针。
//arr是一个整形一维数组。

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int*p = arr;
	int *pend = arr + sz - 1;
	while (p <= pend)
	{
		printf("%d ", *p++);
	}
	return 0;
}