#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int i = 0;
	int sum = 0;
	for (i = 1; i <= 100; i++)
	{
		if (i % 10 == 9)sum++;
		if (i / 10 == 9)sum++;
	}
	printf("1到100的所有整数中出现%d个数字9", sum);
	return 0;
}