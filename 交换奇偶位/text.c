#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��Ŀ����
//дһ���꣬���Խ�һ�������Ķ����Ƶ�����λ��ż��λ����
#define BITCHANGE(a) ((((a) & 0x55555555)) << 1 + (((a) & 0xaaaaaaaa)))
int main()
{
	int a = 0;
	scanf("%d", &a);
	int b = BITCHANGE(a) ;
	printf("%d\n", b);
}