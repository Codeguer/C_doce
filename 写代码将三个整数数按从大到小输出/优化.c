#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void change(int *a,int *b)//���������ϴ�ķ���ǰ��
{
	if (*a < *b)
	{
		int temp = 0;
		temp = *b;
		*b = *a;
		*a = temp;
	}
}
int main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	scanf("%d%d%d", &a, &b, &c);//����˼·����������������ķ�����λ���ٱȽϺ�������
	change(&a, &b);
	change(&a, &c);
	change(&b, &c);
	printf("%d%d%d\n", a, b, c);
	return 0;
}