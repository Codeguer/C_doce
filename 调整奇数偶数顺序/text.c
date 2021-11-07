//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////输入一个整数数组，实现一个函数，
////来调整该数组中数字的顺序使得数组中所有的奇数位于数组的前半部分，
////所有偶数位于数组的后半部分
//void change(int arr[])
//{
//	int i = 0;
//	int j = 0;
//	int srr[10];
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 != 0)
//		srr[j++] = arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		if (arr[i] % 2 == 0)
//		srr[j++] = arr[i];
//	}
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = srr[i];
//	}
//}
//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	change(arr);
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	printf("\n");
//	return 0;
//}