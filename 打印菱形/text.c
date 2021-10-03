#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 11//规则只能为奇数
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 1;//星号数
	int m = 0;//空格数
	int sign = 1;//符号
	for (i = 0; i < SIZE; i++)
	{
		for (j = 0; j < SIZE; j++)
		{
			if (j < (SIZE - k) / 2)
				printf(" ");
			else if (j >= (SIZE + k) / 2)
				printf(" ");
			else
				printf("%c", '*');
		}
		
		k += (sign*2);
		if (SIZE <= k)sign = -1;
		printf("\n");
	}
	return 0;
}