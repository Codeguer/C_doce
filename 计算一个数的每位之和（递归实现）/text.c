#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int DigitSum(a)
{
	if (a > 9)
	{
		return(a % 10 + DigitSum(a / 10));
	}
	else
		return a;
}
int main()
{
	int a = 0;
	scanf("%d", &a);//输入1729
	printf("a的各个位之和位%d\n", DigitSum(a));
	return 0;
}