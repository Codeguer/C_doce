//#define _CRT_SECURE_NO_WARNINGS 1
//#include <string.h>
//#include<stdio.h>
//int is_string_rotate(char* str1, char* str2)
//{
//	int i = 0;
//	int n = strlen(str1);//5
//	for (i = 0; i < n; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str1;//1
//		//2. ��ߵ�n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str1 + j) = *(str1 + j + 1);
//		}
//		//3. tmp�������
//		*(str1 + n - 1) = tmp;
//
//		if (strcmp(str1, str2) == 0)
//		{
//			return 1;
//		}
//	}
//	return 0;
//}
//int main()
//{
//	char arr1[20] = "AABCD";
//	char arr2[] = "BCDAA";
//	int ret = is_string_rotate(arr1, arr2);
//	if (ret == 1)
//	{
//		printf("yes\n");
//	}
//	else
//	{
//		printf("no\n");
//	}
//
//	return 0;
//}