#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//折半查找或者叫二分查找，最坏查log以2为底的n的对数，n为问题规模，如数组数据有2^32次个，只需最坏查32次
int main()
{
	int n = 17;
	int l = 0;
	int r = 0;
	int arr[20] = { 0 };
	r = 19;
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		arr[i] = i + 1;//有序数组
	}
	while (2)//要分析找不到的情况应改为while(l<=r)
	{
		int m = 0;
		m = (l+r)/2;
		if (n > arr[m])
		{
			l = (l + r) / 2+1;
		}
		else if(n<arr[m])
		{
			r = (l + r) / 2-1;
		}
		else
		{
			m = (l + r) / 2;
			printf("a[%d]=%d", m, n);
			break;
		}
	}
	/*
	if(l>r)
	{
		printf("该数字不在这个数组里");
	}
	*/
	return 0;
}