#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int sum(int a)
{
	if (a / 100000 == 0)
		return(a + sum(a%10 + a * 10));
	else
		return 0;
}
int main()
{
	int a = 2;
	printf("%d\n", sum(a));
	return 0;
}