#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//���0��100000֮������С�ˮ�ɻ������������
//��ˮ�ɻ�������ָһ��nλ�������λ���ֵ�n�η�֮��ȷ�õ��ڸ�������
//�� : 153��1 ^ 3��5 ^ 3��3 ^ 3����153��һ����ˮ�ɻ�������
int testbit(int i)
{
	if (i / 10 != 0)
	{
		return (1 + testbit(i / 10));
	}
	else
		return 1;
}
void testnum(int i, int n)
{
	int tmp = i;
	int j = 0;
	int s = 0;
	for (j = 0; j < n; j++)
	{
		s +=(int) pow((double)(i % 10),(double) n);;
		i /= 10;
	}
	if (s == tmp)
	{
		printf("%d ", tmp);
	}
}
int main()
{
	int i = 0;
	for (i = 0; i <= 100000; i++)
	{
		int n = 0;
		n = testbit(i);//��⼸λ�������������
		testnum(i, n);//����Ƿ�Ϊˮ�ɻ���
	}
	return 0;
}