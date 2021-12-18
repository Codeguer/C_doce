#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void chang(int *a, int *b)
{
	int tmp = 0;
	tmp = *a;
	*a = *b;
	*b = tmp;
}
int main()
{
	int a = 10;
	int b = 20;
	printf("交换前a=%d b=%d\n", a, b);
	chang(&a, &b);
	printf("交换后a=%d b=%d\n", a, b);	
	return 0;
}