#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����Ա�����ֳ���֡���7λ���٣��Ӽ�������������ɼ���
//ÿ��7���������ٷ��ƣ���ȥ��һ����߷ֺ�һ����ͷ֣����ÿ���ƽ���ɼ���
int main()
{
	int a[7] = { 0 };
	scanf("%d %d %d %d %d %d %d", &a[0], &a[1], &a[2], &a[3], &a[4], &a[5], &a[6]);
	int max = 0;
	int min = 0;
	int i = 0;
	int max1 = 0;
	int min1 = 0;
	max = a[0];
	min = a[0];
	float sum = 0;
	for (i = 0; i < 7; i++)
	{
		if (max < a[i])
		{
			max = a[i];
			max1 = i;
		}
	}
	for (i = 0; i < 7; i++)
	{
		if (min > a[i])
		{
			min = a[i];
			min1 = i;
		}
	}
	for (i = 0; i < 7; i++)
	{
		if (i != max1 && i != min1)
		{
			sum += (float)a[i];
		}
	}
	sum = sum / 5;
	printf("%0.2f\n", sum);
	return 0;
}