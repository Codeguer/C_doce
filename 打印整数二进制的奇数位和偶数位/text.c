//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////获取一个整数二进制序列中所有的偶数位和奇数位，分别打印出二进制序列
//void odd(int a)
//{
//	int i = 0;
//	int arr[16] = { 0 };
//	for (i = 0; i < 32; i += 2)
//	{
//		arr[i / 2] = ((a >> i)&1);
//	}
//	printf("奇数位:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//	printf("\n");
//	for (i = 1; i < 32; i += 2)
//	{
//		arr[(i-1) / 2] = ((a >> i) & 1);
//	}
//	printf("偶数位:");
//	for (i = 15; i >= 0; i--)
//	{
//		printf("%d", arr[i]);
//	}
//}
//int main()
//{
//	int a = 1999;//‭00000000000000000000011111001111‬
//	odd(a);
//
//	return 0;
//}