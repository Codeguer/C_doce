#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����һ���������飬��ɶ�����Ĳ���
//
//ʵ�ֺ���init() ��ʼ������Ϊȫ0
//ʵ��print()  ��ӡ�����ÿ��Ԫ��
//ʵ��reverse()  �����������Ԫ�ص����á�
//Ҫ���Լ�������Ϻ����Ĳ���������ֵ��
void init(int arr[20])
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		arr[i] = 0;
	}
}
void print(int arr[20])
{
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		printf("%d ",arr[i]);
	}
}
void reverse(int arr[20])
{
	int i = 0;
	int tmp = 0;
	while (i < 10)
	{
		tmp = arr[i];
		arr[i] = arr[20 - i - 1];
		arr[20 - i - 1] = tmp;
	}
}
int main()
{
	int arr[20];
	init(arr);
	print(arr);
	reverse(arr);
	return 0;
}
