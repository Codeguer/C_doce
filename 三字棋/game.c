#include"game.h"


void menu()
{
	printf(".............................................\n");
	printf("............1 �� Play........................\n");
	printf("............0 �� Exit........................\n");
	printf(".............................................\n");
}



void player(char arr[][WIDE], int len, int wide)
{
	int x = -1;
	int y = -1;
	do
	{
		printf("��������Ҫ���ӵ�������11Enter��:\n");
		scanf("%d", &x);//�Ż�����
		//���������
		char tmp = 0;
		while (tmp != '\n')
		{
			tmp = getchar();
		}
		y = x % 10;
		x = x / 10;
		if (x > len || x < 1 || y > len || y < 1)
		{
			printf("���������������������:\n");
		}
		if (arr[x-1][y-1] != ' ')
		{
			printf("�����Ի��壡��������������:");
		}
	} while (x > len || x < 1 || y > len || y < 1|| arr[x-1][y-1] != ' ');
	arr[x - 1][y - 1] = '*';
	printf("�������:\n");
	initboard(arr, LENGTH, WIDE);
}




void computer(char arr[][WIDE], int len, int wide)
{
	int x = -1;
	int y = -1;
	while (1)
	{
		x = rand() % len;
		y = rand() % wide;
		if (arr[x][y] == ' ')
		{
			arr[x][y] = 'X';
			break;
		}
	}
	printf("��������:\n");
	initboard(arr, LENGTH, WIDE);
}



char textwin(char arr[][WIDE], int len, int wide)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < len; i++)
	{
		j = 0;
		while (j+1 < wide)
		{
			if ((arr[i][j] == arr[i][j + 1]) && (arr[i][0] != ' '))
			{
				j++;
			}
			else
				break;
		}
		if (j == wide - 1)return arr[i][0];
	}
	for ( j= 0;  j< wide; j++)
	{
		i = 0;
		while (i + 1 < len)
		{
			if ((arr[i][j] == arr[i+1][j]) && (arr[0][j] != ' '))
			{
				i++;
			}
			else
				break;
		}
		if (i == len - 1)return arr[0][j];
	}
	for (i = 0; i+1 < len; )
	{
		if ((arr[i][i] == arr[i+1][i + 1]) && (arr[0][0] != ' '))
		{
			i++;
		}
		else
			break;
	}
	if (i + 1 == len)return arr[0][0];
	for (j = 0; j + 1 < wide; )
	{
		if ((arr[wide-1-j][j] == arr[wide - 1 - j -1][j + 1]) &&( arr[0][wide-1] != ' '))
		{
			j++;
		}
		else
			break;
	}
	if (j + 1 == wide)return arr[0][wide-1];
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < wide; j++)
		{
			if (arr[i][j] == ' ')return 'c';
		}
	}
	return 'o';
}




void initarr(char arr[][WIDE], int len, int wide)
{
	int i = 0;
	int j = 0;
	//��ʼ������
	for (i = 0; i < len; i++)
	{
		for (j = 0; j < wide; j++)
		{
			arr[i][j] = ' ';
		}
	}
}




void initboard(char arr[LENGTH][WIDE], int len,int wide)
{
	int i = 0;
	int j = 0;
	//��ʼ������
	for (i = 0; i <len; i++)
	{
		for (j = 0; j < wide; j++)
		{
			if (j == wide - 1)
			{
				printf(" %c ",arr[i][j]);
			}
			else
			{
				printf(" %c |",arr[i][j]);
			}
		}
		printf("\n");

		if (i != len - 1)
		{
			for (j = 0; j < wide; j++)
			{
				if (j != wide - 1)
				{
					printf("---|");
				}
				else
					printf("---");
			}
		}
		
		printf("\n");
	}
}




int result(char arr[LENGTH][WIDE], int len, int wide)
{
	if (textwin(arr, LENGTH, WIDE) == '*')
	{
		printf("��ϲ��Ӯ��!");
	}
	else if (textwin(arr, LENGTH, WIDE) == 'X')
	{
		printf("���ź���������!");
	}
	else if (textwin(arr, LENGTH, WIDE) == 'o')
	{
		printf("���Ϊƽ��!");
	}
	else
		return 1;
	return 0;
}



void game()
{
	char arr[LENGTH][WIDE] = { 0 };
	initarr(arr, LENGTH, WIDE);
	initboard(arr, LENGTH, WIDE);
	while (1)
	{
		player(arr,LENGTH,WIDE);
		if (result(arr, LENGTH, WIDE) == 0)break;
		computer(arr, LENGTH, WIDE);
		if (result(arr, LENGTH, WIDE) == 0)break;

	}
}

