#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//������A�е����ݺ�����B�е����ݽ��н�����������һ����
void change(int a[], int b[],int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		int tmp = 0;
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
}
int main()
{
	int j = 0;
	int a[5] = { 1,2,3,4,5 };
	int b[5] = { 6,7,8,9,10 };
	int sz = sizeof(a) / sizeof(a[0]);
	change(a, b,sz);
	printf("����a��\n");
	for (j = 0; j < sz; j++)
	{
		printf("%d ", a[j]);
	}
	printf("\n");
	printf("����b��\n");
	for (j = 0; j < sz; j++)
	{
		printf("%d ", b[j]);
	}
	printf("\n");
	return 0;
}