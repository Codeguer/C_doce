#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//优化k为负数的情况
double Sum(double n, int k)
{
	if (k > 0)
	{
		return n * Sum(n, k - 1);
	}
	else if (0==k)
		return 1.0;
	else
		return 1.0 / (n * Sum(n, -k - 1));
}
int main()
{
	int n = 0;
	int k = 0;
	printf("请输入n与k的值:\n");
	scanf("%d%d", &n, &k);
	printf("%d的%d次方为:%lf\n", n, k, Sum((double)n, k));
	return 0;
}