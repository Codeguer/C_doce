#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

void  feibo(int N,int a,int b)
{
	if (b >= N)
	{
		printf("N最少需要%d步\n", ((b - N>N-a)?N-a:b-N));
		return;
	}
	int tmp = 0;
	tmp = b;
	b = a + b;
	a = tmp;
	feibo(N, a,b);
}

int main()
{
	int N = 6;
	int a = 0;
	int b = 1;
	feibo(N,a,b);
	return 0;
}