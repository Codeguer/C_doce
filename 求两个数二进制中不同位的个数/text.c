//#define _crt_secure_no_warnings 1
//#include<stdio.h>
////求两个数二进制中不同位的个数
////编程实现：两个int（32位）整数m和n的二进制表达中，有多少个位(bit)不同？
////输入例子 :
////1999 2299
////输出例子 : 7
//int test(int a, int b)
//{
//	int count = 0;
//	int i = 0;
//	for (i = 0; i < 32; i++)
//	{
//		if (((a >> i) & 1) !=( (b >> i) & 1))
//			count++;
//	}
//	return count;
//
//}
//int main()
//{
//	int a = 1999;//00000000000000000000‭011111001111‬
//	int b = 2299;//‭00000000000000000000100011111011‬
//	printf("%d\n",test(a, b));
//	return 0;
//}