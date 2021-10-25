#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//统计二进制中1的个数

int Numberof1( int n)//n改为无符号数整型
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
	int n = 49;//支持负数
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
//这种方法可以用来判断一个数字是不是2的n次方
//if((n&(N-1))==0)printf("是");