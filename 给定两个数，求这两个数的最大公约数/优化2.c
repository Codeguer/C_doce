#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d%d", &a, &b);
	while (a%b)
	{
		int temp = 0;
		temp = a%b;
		a = b;
		b=temp;
	}
	printf("最大公约数为：%d", b);
	return 0;
}