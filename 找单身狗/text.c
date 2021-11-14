#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//题目内容
//一个数组中只有两个数字出现一次，其他所有数字都出现了两次
//编写一个函数找出这两个只出现一次的数字
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,5,6,7,8,10,11,12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (j != i)
//			{
//				if (arr[i] == arr[j])
//					break;
//			}
//		
//		}
//		if (j != sz)
//			continue;
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//上面的空间复杂度比较高
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,5,6,7,8,10,11,12 };
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int pos = 0;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//0100
	//1001
	//1101//某一个位上为1，那么这两个数在这个位上肯定是一个为1，一个为0
	//此时ret为13，二进制为1101
	for (i = 0; i < 32; i++)//int32位
	{
		//计算ret的哪一位为1
		if (((ret >> i) & 1) == 1)//写出ret&1<<i,gcc会报错，因为int类型的数左移可能会溢出
			break;
	}
	pos = i;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
	}
	num2 = ret ^ num1;
	printf("%d %d\n", num1, num2);

	return 0;
}