#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
unsigned int Number(int ret)
{
	unsigned int count = 0;
	while (ret)
	{
		ret = ret & (ret - 1);
		count++;
	}
	return count+1;
}
int main()
{
	int m = 0;
	int n = 0;
	int i = 0;
	int count = 0;
	scanf("%d%d", &m, &n);
	int ret = m ^ n;//Ȼ���ret�ж����Ƶ�1�ĸ������м���
	printf("%u\n",Number(ret));
	return 0;
}