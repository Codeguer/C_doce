#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��һ������һ������(0��N��50)��
//
//�ڶ�������N���������е������������ÿո�ָ���N��������
//
//������������Ҫ���в����һ��������
//
//���������
//���Ϊһ�У�N + 1���������е�������
int main()
{
	int N = 0;
	int a[50] = { 0 };
	int i = 0;
	int num = 0;
	int j = 0;
	scanf("%d", &N);
	for (i = 0; i < N; i++)
	{
		scanf("%d ", &a[i]);//���뺯�������������ã�ֱ������1 5 7 9 11 ��enter��11����ӿո�
	}
	scanf("%d", &num);
	for (i = 0; i < N; i++)
	{
		if (a[i] > num)
		{
			break;
		}
	}
	for (j = N - 1; j >= i; j--)
	{
		a[j + 1] = a[j];
	}
	a[i] = num;
	for (i = 0; i < N + 1; i++)
	{
		printf("%d ", a[i]);
	}
	return 0;
}