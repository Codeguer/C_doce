#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//offsetof��ʵΪ��
typedef struct A
{
	int a;
	short b;
	int c;
	char d;
}A;
#define OFFSETOF(struct_name,mem_name) ((int)&(((struct_name*)0)->mem_name))
int main()
{
	printf("%d\n", OFFSETOF(A, a));
	printf("%d\n", OFFSETOF(A, b));
	printf("%d\n", OFFSETOF(A, c));
	printf("%d\n", OFFSETOF(A, d));
	return 0;
}
//˵����(struct_name*)0������0ǿתΪ�ṹ������A�ĵ�ַ����ַ��ָ�룬��ָ��ָ���˽ṹ������A��
//���Ҹýṹ������A����Ԫ�صĵ�ַΪ0��&(((struct_name*)0)->mem_name)ȡ��һ�µ�ַ��û�е���
//�ṹ���Ա����