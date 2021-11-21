#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int *a,int *b)//将两个数较大的放在前面
{
	if (*a < *b)
	{
		int temp = 0;
		temp = *b;
		*b = *a;
		*a = temp;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);//总体思路：求出三个数中最大的放在首位，再比较后两个数
	change(&a, &b);
	change(&a, &c);
	change(&b, &c);
	printf("%d%d%d\n", a, b, c);
	return 0;
}