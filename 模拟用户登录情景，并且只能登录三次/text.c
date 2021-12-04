#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	int i = 0;
	char arr[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("请输入密码：");
		scanf("%s", arr);//如输入123456，此时arr[20]="1234560000000000000"
		if (strcmp(arr, "123456") == 0)//strcmp为字符串比较函数
			//if(password=="123456")//这是在比较地址，比较地址是没有意义的
			/*
				返回< 0 的数string1 less than string2 
                返回  0     string1 identical to string2 
                返回 > 0的数string1 greater than string2 

			*/
		{
			printf("密码输入正确\n");
			break;
		}
		else
		{
			if (2 - i == 0)continue;
			printf("密码输入错误，您还有%d次机会，请重新输入", 2 - i);
		}
	}
	if (3 == i)
	{
		printf("密码确认失败，将在3S后结束本次服务");
		Sleep(3000);//单位是ms，头文件是windows.h,VC用Sleep, 别的一律使用sleep
	}
	return 0;
}