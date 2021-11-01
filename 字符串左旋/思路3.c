//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//#include <assert.h>
////三步翻转法ABCDEF
////第一步：AB->BA
////第二步：CDEF->FEDC
////第三步：BAFEDC->CDEFAB
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
//	reverse(str, str+k-1);//左
//	reverse(str+k, str+n-1);//右
//	reverse(str, str+n-1);//整体
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