#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Result();
int main()
{
	int n = -1;
	printf("请输入自然数（本功能可以求自然数的阶乘）：");
	while (n < 0)
	{
		scanf("%d", &n);
		if (n < 0)
			printf("请输入自然数：");
	}
	switch (n)
	{
		case 0:
			printf("0的阶乘是1");
			break;
		case 1:
			printf("1的阶乘是1");
			break;
		default:
		{
			printf("%d!是：%d", n,Result(n));
		}
	}
	return 0;
}
int Result(int n)
{
	int num = 1;
	int i = 0;
	for (i = 2; i <= n ; i++)
	{
		num *= i;
	}
	return num;
}