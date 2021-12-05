#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//使用assert()断言，判断为假则报错，判断为真则什么事情也不会发生
//头文件为assert.h，assert为一个函数
char* my_strcpy(char* dest, const char* src)//还可以继续优化增加返回值
{
	assert(src != NULL);//当src==NULL时报错为Assertion failed: src != NULL,
	//file f:\编程文件汇集\c语言\project93\project93\text16_6_23.c, line 8
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//当这里不小心写成while (*src++ = *dest++)就会报错
		//因为arr1比arr2长把arr1拷贝到arr2就会报错，可以加个const
		//void my_strcpy(char* dest, const char* src)
		//即使写错了编译器也会在这里编不过去
	{
		;
	}
	return ret;//返回目标空间的起始地址
}


int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
