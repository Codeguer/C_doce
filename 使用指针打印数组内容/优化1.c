#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//дһ��������ӡarr��������ݣ���ʹ�������±꣬ʹ��ָ�롣
//arr��һ������һά���顣

int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int*p = arr;
	int *pend = arr + sz - 1;
	while (p <= pend)
	{
		printf("%d ", *p++);
	}
	return 0;
}