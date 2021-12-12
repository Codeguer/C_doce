#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void move(char X, char Y)
{
	printf("%c->%c ", X, Y);
}

void HanoiTower(int n, char A, char B, char C)
{
	if (n == 1)//递归终止条件
	{
		move(A, C);
		return;
	}
		
	else
	{
		HanoiTower(n - 1, A, C, B);//将n-1个环从A柱子放到B柱子上，C柱子作为中介
		move(A, C);
		HanoiTower(n - 1, B, A, C);//将n-1个环从B柱子放到C柱子上，A柱子作为中介
	}
}


int main()
{
	printf("请确认A柱子上一共有多少个环:\n");
	int n = 0;
	scanf("%d", &n);
	HanoiTower(n, 'A','B','C');//将n个环从A柱子放到C柱子上，B柱子作为中介
}