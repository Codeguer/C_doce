#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//offsetof其实为宏
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
//说明：(struct_name*)0将数字0强转为结构体类型A的地址，地址即指针，该指针指向了结构体类型A，
//并且该结构体类型A的首元素的地址为0，&(((struct_name*)0)->mem_name)取了一下地址并没有调用
//结构体成员变量