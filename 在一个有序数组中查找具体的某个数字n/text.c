#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�۰���һ��߽ж��ֲ��ң����log��2Ϊ�׵�n�Ķ�����nΪ�����ģ��������������2^32�θ���ֻ�����32��
int main()
{
	int n = 17;
	int l = 0;
	int r = 0;
	int arr[20] = { 0 };
	r = 19;
	int i = 0;
	for (i = 0; i < 20; i++)
	{
		arr[i] = i + 1;//��������
	}
	while (2)//Ҫ�����Ҳ��������Ӧ��Ϊwhile(l<=r)
	{
		int m = 0;
		m = (l+r)/2;
		if (n > arr[m])
		{
			l = (l + r) / 2+1;
		}
		else if(n<arr[m])
		{
			r = (l + r) / 2-1;
		}
		else
		{
			m = (l + r) / 2;
			printf("a[%d]=%d", m, n);
			break;
		}
	}
	/*
	if(l>r)
	{
		printf("�����ֲ������������");
	}
	*/
	return 0;
}