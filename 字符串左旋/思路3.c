//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include <assert.h>
////������ת��ABCDEF
////��һ����AB->BA
////�ڶ�����CDEF->FEDC
////��������BAFEDC->CDEFAB
//void reverse(char* left, char* right)
//{
//	assert(left);
//	assert(right);
//	while (left<right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//void string_left_rotate(char* str, int k)
//{
//	assert(str);
//
//	int n = strlen(str);
//	reverse(str, str+k-1);//��
//	reverse(str+k, str+n-1);//��
//	reverse(str, str+n-1);//����
//}
//
//
//int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 2;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}