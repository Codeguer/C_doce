//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
//void string_left_rotate(char* str, int k)
//{
//	int i = 0;
//	int n = strlen(str);
//	for (i = 0; i < k; i++)
//	{
//		//ÿ������תһ���ַ�
//		char tmp = *str;//1
//		//2. ��ߵ�n-1���ַ���ǰŲ��
//		int j = 0;
//		for (j = 0; j < n - 1; j++)
//		{
//			*(str + j) = *(str + j + 1);
//		}
//		//3. tmp�������
//		*(str + n - 1) = tmp;
//	}
//}
// int main()
//{
//	char arr[10] = "ABCDEF";
//	int k = 4;
//	string_left_rotate(arr, k);
//	printf("%s\n", arr);
//
//	return 0;
//}