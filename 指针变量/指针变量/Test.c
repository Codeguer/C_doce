#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int a = 3;//������һ����ͨ����������3��ֵ��a
	printf("��һ�±���a�ĵ�ַ��%p\n", &a);
	int *pa = &a;
	printf("��һ��*pa�ĵ�ַ��%p\n", &(*pa));
	printf("a��ֵΪ��%d\n", *pa);

	int p = &a;
	return 0;
}

//int pa = &a;
//printf("��ӡһ��pa����:%p\n", pa);
//printf("a��ֵΪ��%d\n", *(int*)pa);