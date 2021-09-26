#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int row)
{
	int sign = 1;
	int line = row;
	int i = 0;
	int j = 0;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= row; j++)
		{
			if ((row - line + 1) == j)
			{
				printf("*");
			}
			else if (line == j)
			{
				printf("*");
			}
			else
				printf(" ");
		}
		printf("\n");
		if (i + 1 <= row / 2 + 1)
			line--;
		else
			line = i + 1;
	}

}
int main()
{
	int row = 0;
	for (row = 3; row <= 20; row++)
	{
		print(row);
	}
	return 0;
}