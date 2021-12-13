#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int count = 0;
int My_strlen(char *p)
{
	if (*p != '\0')
	{ 
		count++;
	    My_strlen(p + 1);
	}
	return count;
}
int main()
{
	char a[] = "I Love You";
	printf("数组a长度为%d\n", My_strlen(a));//Z这里的函数只返回最外面的那个值
	return 0;
}