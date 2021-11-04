#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//第一行输入一个整数(0≤N≤50)。
//
//第二行输入N个升序排列的整数，输入用空格分隔的N个整数。
//
//第三行输入想要进行插入的一个整数。
//
//输出描述：
//输出为一行，N + 1个有序排列的整数。
int main()
{
	int N = 0;
	int a[50] = { 0 };
	int i = 0;
	int num = 0;
	int j = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d ", &a[i]);//输入函数缓冲区的利用，直接输入1 5 7 9 11 加enter（11后面加空格）
	}
	scanf("%d", &num);
	for (i = 0; i < N; i++)
	{
		if (a[i] > num)
		{
			break;
		}
	}
	for (j = N - 1; j >= i; j--)
	{
		a[j + 1] = a[j];
	}
	a[i] = num;
	for (i = 0; i < N + 1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}