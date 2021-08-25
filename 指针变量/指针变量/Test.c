#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;//定义了一个普通变量，并将3赋值给a
	printf("看一下变量a的地址：%p\n", &a);
	int *pa = &a;
	printf("看一下*pa的地址：%p\n", &(*pa));
	printf("a的值为：%d\n", *pa);

	int p = &a;
	return 0;
}

//int pa = &a;
//printf("打印一下pa变量:%p\n", pa);
//printf("a的值为：%d\n", *(int*)pa);