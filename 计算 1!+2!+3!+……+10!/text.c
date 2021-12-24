#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int num = 1;
	int cmt = 1;//cumulantÀÛ»ıÁ¿
	int i = 1;
	for (i = 2; i <=10; i++)
	{
		cmt *= i;
		num += cmt;
	}
	printf("%d\n", num);
	return 0;
}