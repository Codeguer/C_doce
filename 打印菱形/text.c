#define _CRT_SECURE_NO_WARNINGS 1
#define SIZE 11//����ֻ��Ϊ����
#include<stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	int k = 1;//�Ǻ���
	int m = 0;//�ո���
	int sign = 1;//����
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