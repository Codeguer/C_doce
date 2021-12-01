#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int MAX(int a, int b)
{
	if (a > b)
		return a;
	else
		return b;
}
int main()
{
	int a, b;
	printf("输入a:");
	scanf("%d", &a);
	printf("输入b:");
	scanf("%d", &b);
	printf("较大值为：%d\n",MAX(a,b));
	return 0;
}