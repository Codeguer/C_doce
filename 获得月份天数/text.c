#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//多组输入，一行有两个整数，分别表示年份和月份，用空格分隔。
//输出描述：
//针对每组输入，输出为一行，一个整数，表示这一年这个月有多少天。
int isyear(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	isyear(year);
	while (scanf("%d %d", &year, &month)!=EOF)//使用循环（也利用了缓冲区）实现多组输入如2021 5 2020 6ENTER(用enter就能终止循环）
	{
		if (1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month)
		{
			printf("%d\n", 31);
		}
		else if (4 == month || 6 == month || 9 == month || 11 == month)
		{
			printf("%d\n", 30);
		}
		else if (isyear(year))
		{
			printf("%d\n", 29);
		}
		else
		{
			printf("%d\n", 28);
		}
	}
	
	
	return 0;
}