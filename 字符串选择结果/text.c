//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////дһ���������ж�һ���ַ����Ƿ�Ϊ����һ���ַ�����ת֮����ַ�����
////���磺����s1 = AABCD��s2 = BCDAA������1
////����s1 = abcd��s2 = ACBD������0.
////
////AABCD����һ���ַ��õ�ABCDA
////AABCD���������ַ��õ�BCDAA
////AABCD����һ���ַ��õ�DAABC
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
//				printf("���ַ���������һ���ַ�����ת֮����ַ���\n");
//				break;
//			}
//		}
//		if (0 == ret)
//			printf("һ���ַ�����������һ���ַ�����ת֮����ַ���\n");
//	}
//	else
//		printf("һ���ַ�����������һ���ַ�����ת֮����ַ���\n");
//	return 0;
//}