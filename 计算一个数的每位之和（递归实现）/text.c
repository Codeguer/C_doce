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
	scanf("%d", &a);//����1729
	printf("a�ĸ���λ֮��λ%d\n", DigitSum(a));
	return 0;
}