#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(char X, char Y)
{
	printf("%c->%c ", X, Y);
}

void HanoiTower(int n, char A, char B, char C)
{
	if (n == 1)//�ݹ���ֹ����
	{
		move(A, C);
		return;
	}
		
	else
	{
		HanoiTower(n - 1, A, C, B);//��n-1������A���ӷŵ�B�����ϣ�C������Ϊ�н�
		move(A, C);
		HanoiTower(n - 1, B, A, C);//��n-1������B���ӷŵ�C�����ϣ�A������Ϊ�н�
	}
}


int main()
{
	printf("��ȷ��A������һ���ж��ٸ���:\n");
	int n = 0;
	scanf("%d", &n);
	HanoiTower(n, 'A','B','C');//��n������A���ӷŵ�C�����ϣ�B������Ϊ�н�
}