#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
//求出0～100000之间的所有“水仙花数”并输出。
//“水仙花数”是指一个n位数，其各位数字的n次方之和确好等于该数本身，
//如 : 153＝1 ^ 3＋5 ^ 3＋3 ^ 3，则153是一个“水仙花数”。
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
		n = testbit(i);//检测几位数并将结果返回
		testnum(i, n);//检测是否为水仙花数
	}
	return 0;
}