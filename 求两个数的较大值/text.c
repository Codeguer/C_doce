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
	printf("����a:");
	scanf("%d", &a);
	printf("����b:");
	scanf("%d", &b);
	printf("�ϴ�ֵΪ��%d\n",MAX(a,b));
	return 0;
}