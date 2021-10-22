#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//题目内容
//写一个宏，可以将一个整数的二进制的奇数位和偶数位交换
#define BITCHANGE(a) ((((a) & 0x55555555)) << 1 + (((a) & 0xaaaaaaaa)))
int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = BITCHANGE(a) ;
	printf("%d\n", b);
}