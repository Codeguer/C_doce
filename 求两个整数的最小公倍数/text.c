#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

int main()
{
	int a = 0;
	int b = 0;
	scanf("%d %d", &a,&b);
	int i = 1;
	for (i = 1; ; i++)
	{
		if (a*i%b == 0)
		{
			printf("%d\n", a * i);
			break;
		}
	}
	return 0;
}