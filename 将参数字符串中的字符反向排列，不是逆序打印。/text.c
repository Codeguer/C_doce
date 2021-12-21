//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//void  reverse_string(char *p,int *len,int *left)
//{
//	if ((*left)<=(*len))
//	{
//		int tmp = 0;
//		tmp = *(p+*left);
//		*(p + *left) = *(p + *len);
//		*(p + *len) = tmp;
//		(*left)++;
//		(*len)--;
//		reverse_string(p, len, left);
//	}
//}
//int length = 0;
//int left = 0;
//int main()
//{
//	int i = 0;
//	char a[] = "abcdef";
//	printf("逆序前数组a为%s\n", a);
//	for (i = 0; a[i] != '\0'; i++)
//	{
//		length++;
//	}
//	length--;
//	reverse_string(a,&length,&left);
//	printf("逆序后数组a为%s\n", a);
//	return 0;
//}