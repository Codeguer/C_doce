#include"game.h"

void game()
{
	printf("赢了有奖励哦！\n");
	char tmp = 0;
	int z = 0;
	int x = -1;//要排的地雷的地标
	int y = -1;
	char mine[ROWS][COLS] = { 0 };//地雷
	char board[ROWS][COLS] = { 0 };//战场
	setbattle(mine, ROWS, COLS,'0');
	setbattle(board, ROWS, COLS,'*');
	setmine(mine, ROW, COL);
	InitBattle(board, ROW, COL);
	//printf("-------------------------\n");
	//InitBattle(mine, ROW, COL);
	do
	{
		printf("请输入要排的地标(如输入行列Enter)：\n");
	error1:
		scanf("%d%", &z);
		x = z / 10;
		y = z % 10;
		tmp = getchar();
		while (tmp != '\n')//清除scanf的缓冲区
		{
			tmp = getchar();
		}
		if (x < 1 || x>9 || y < 1 || y>9)
		{
			printf("输入错误请重新输入：\n");
			goto error1;
		}
		if (0 == testmine(mine, x, y))//为0则游戏继续
		{
			board[x][y] = testcount(mine, ROWS, COLS, x, y);
			/*InitBattle(mine, ROW, COL);
			printf("--------------------------------\n");*/
			InitBattle(board, ROW, COL);
			if (testwin(board, ROW, COL) == (ROW*COL - COUNT))
			{
				printf("恭喜你赢了！！！\n");
				printf("美女畅聊电话110\n");
				break;
			}
			
		}
		else
		{
			board[x][y] = 'X';
			printf("游戏失败!!!\n");
			InitBattle(board, ROW, COL);
			break;
		}
		

	} while (1);


	
}

void setmine(char mine[ROWS][COLS], int row, int col)
{
	int x = -1;
	int y = -1;
	int count = COUNT;
	while (count)
	{
		x = rand() % 10;
		y = rand() % 10;
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			count--;
			mine[x][y]= '1';
		}
	}
}

void InitBattle(char battle[ROWS][COLS], int row, int col)
{
	int i = 1;
	int j = 1;
	for (i = 0; i < row + 1; i++)
	{
		printf("%-3d", i);
	}
	printf("\n");
	for (i = 0; i < 3*row+1 ; i++)
	{
		printf("%c", '-');
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%-2d|", i);
		for (j = 1; j <= col; j++)
		{
			printf("%-3c", battle[i][j]);
		}
		printf("\n");
	}
		
}
void setbattle(char battle[ROWS][COLS], int rows, int cols,char sym)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			battle[i][j]= sym;
		}
	}
}

int testmine(char mine[ROWS][COLS], int x, int y)
{
	if (mine[x][y] == '1')
		return 1;
	else
		return 0;
}

char testcount(char mine[ROWS][COLS], int rows, int cols, int x, int y)
{
	char count = '0';
	if (mine[x][y+1] == '1')
		count++;
	if (mine[x][y-1] == '1')
		count++;
	if (mine[x+1][y] == '1')
		count++;
	if (mine[x+1][y-1] == '1')
		count++;
	if (mine[x+1][y+1] == '1')
		count++;
	if (mine[x-1][y] == '1')
		count++;
	if (mine[x-1][y+1] == '1')
		count++;
	if (mine[x-1][y-1] == '1')
		count++;
	return count;
}

int testwin(char battle[ROWS][COLS], int row, int col)
{
	int count = 0;
	int i = -1;
	int j = -1;
	for (i = 1; i <= row; i++)
	{
		for (j = 1; j <= col; j++)
		{
			if (battle[i][j] != '*')
				count++;
		}
	}
	return count;
}