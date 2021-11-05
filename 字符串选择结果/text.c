//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////写一个函数，判断一个字符串是否为另外一个字符串旋转之后的字符串。
////例如：给定s1 = AABCD和s2 = BCDAA，返回1
////给定s1 = abcd和s2 = ACBD，返回0.
////
////AABCD左旋一个字符得到ABCDA
////AABCD左旋两个字符得到BCDAA
////AABCD右旋一个字符得到DAABC
//void Lcir(char arr[],char brr[], int sz, int k)
//{
//	int i = 0;
//	char tmp = 0;
//	int j = 0;
//	for (i = 0; i < k; i++)
//	{
//		for (j = k - i; j < sz-i; j++)
//		{
//			tmp = arr[j - 1];
//			arr[j - 1] = arr[j];
//			arr[j] = tmp;
//		}
//	}
//}
//int main()
//{
//	int k = 0;
//	char arr[] = "ABCDEFG";
//	char brr[] = "CDEFGAB";
//	int sz = strlen(arr);
//	int ret = -1;
//	if (sz == strlen(brr))
//	{
//		for (k = 0; k <= sz; k++)
//		{
//			if (k > 0)
//			{
//				Lcir(arr, brr, sz, k);
//				ret =( strcmp(arr, brr)==0);
//				strcpy(arr, "ABCDEFG");
//			}
//			if (1 == ret)
//			{
//				printf("该字符串是另外一个字符串旋转之后的字符串\n");
//				break;
//			}
//		}
//		if (0 == ret)
//			printf("一个字符串不是另外一个字符串旋转之后的字符串\n");
//	}
//	else
//		printf("一个字符串不是另外一个字符串旋转之后的字符串\n");
//	return 0;
//}