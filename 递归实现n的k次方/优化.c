#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�Ż�kΪ���������
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
	printf("������n��k��ֵ:\n");
	scanf("%d%d", &n, &k);
	printf("%d��%d�η�Ϊ:%lf\n", n, k, Sum((double)n, k));
	return 0;
}