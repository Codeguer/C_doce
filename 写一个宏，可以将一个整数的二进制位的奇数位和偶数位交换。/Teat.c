#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ���꣬���Խ�һ�������Ķ�����λ������λ��ż��λ������

#define swap(num)	(((num & 0xaaaaaaaa)>>1) + ((num & 0x55555555)<<1))
int main()
{
	int num = 5;//0101->1010//10
	printf("%d\n", swap(num));
	return 0;
}