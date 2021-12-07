//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
////将数组A中的内容和数组B中的内容进行交换。（数组一样大）
//void change(int a[5], int b[5])//5是直接看出来的可以进行优化
//{
//	int i = 0;
//	int c[5];
//	for (i = 0; i < 5; i++)
//	{
//		c[i] = a[i];
//		a[i] = b[i];
//		b[i] = c[i];
//	}
//}
//int main()
//{
//	int j = 0;
//	int a[5] = { 1,2,3,4,5 };
//	int b[5] = { 6,7,8,9,10 };
//	change(a, b);
//	printf("数组a：\n");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", a[j]);
//	}
//	printf("\n");
//	printf("数组b：\n");
//	for (j = 0; j < 5; j++)
//	{
//		printf("%d ", b[j]);
//	}
//	printf("\n");
//	return 0;
//}