#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int Result();
int main()
{
	int n = -1;
	printf("��������Ȼ���������ܿ�������Ȼ���Ľ׳ˣ���");
	while (n < 0)
	{
		scanf("%d", &n);
		if (n < 0)
			printf("��������Ȼ����");
	}
	switch (n)
	{
		case 0:
			printf("0�Ľ׳���1");
			break;
		case 1:
			printf("1�Ľ׳���1");
			break;
		default:
		{
			printf("%d!�ǣ�%d", n,Result(n));
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