#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//ͳ�ƶ�������1�ĸ���

int Numberof1( int n)//n��Ϊ�޷���������
{
	int count = 0;
	while (n)
	{
		n = n & (n - 1);
		count++;
	}
	return count;
}
int main()
{
	int n = 49;//֧�ָ���
	int ret = Numberof1(n);
	printf("ret=%d\n", ret);
	return 0;
}
//n=110001
// n & (n - 1)
//110001-n
//110000-n-1
//110000-n
//101111-n-1
//100000-n
//011111-n-1
//000000-n
//���ַ������������ж�һ�������ǲ���2��n�η�
//if((n&(N-1))==0)printf("��");