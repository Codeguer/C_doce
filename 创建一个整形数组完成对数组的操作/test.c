#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//创建一个整形数组，完成对数组的操作
//
//实现函数init() 初始化数组为全0
//实现print()  打印数组的每个元素
//实现reverse()  函数完成数组元素的逆置。
//要求：自己设计以上函数的参数，返回值。
void init(int arr[20])
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[20])
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ",arr[i]);
	}
}
void reverse(int arr[20])
{
	int i = 0;
	int tmp = 0;
	while (i < 10)
	{
		tmp = arr[i];
		arr[i] = arr[20 - i - 1];
		arr[20 - i - 1] = tmp;
	}
}
int main()
{
	int arr[20];
	init(arr);
	print(arr);
	reverse(arr);
	return 0;
}
