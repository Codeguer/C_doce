//#define _CRT_SECURE_NO_WARNINGS 1
//#define MAX 2^32
//#include<stdio.h>
//
////杨辉三角
////分析
///*
//行（i）
//1        0 1 0
//2        0 1 1 0
//3        0 1 2 1 0
//4        0 1 3 3 1 0
//...      ......
//*/
//void print(int row,int i,int arr[],int brr[])
//{
//	if (1 == i)
//	{
//		arr[i] = i;//这里arr数组内容为0 1 0 0 0 0 0...
//	}
//	if (i<=row)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d ", arr[j]);//i行输出i个数据，0不输出
//		}
//		printf("\n");
//		for (j = 1; j <= i + 1; j++)
//		{
//			brr[j] = arr[j - 1] + arr[j];//brr作为临时数组将下一行的数据存储起来
//		}
//		for (j = 1; j <= i + 1; j++)
//		{
//			arr[j] = brr[j];
//		}
//		print(row, i + 1, arr, brr);
//	}
//}
//int main()
//{
//	int row = 0;
//	int i = 1;
//	int arr[MAX] = { 0 };
//	int brr[MAX] = { 0 };
//	scanf("%d", &row,arr);
//	print(row,i,arr,brr);
//	return 0;
//}