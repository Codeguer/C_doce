#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

#define MAP_LENGHT 12
#define MAP_WIDTH 22
#define BLOCK_LENGHT 4
#define BLOCK_WIDTH 2	

void CreateMap(int(*map)[MAP_LENGHT]);//创建地图
void PrintMap(int(*map)[MAP_LENGHT]);//打印地图
void CreateBlock(int(*block)[BLOCK_LENGHT]);//生成方块
void CopyBlockToMap(int(*map)[MAP_LENGHT], int(*block)[BLOCK_LENGHT]);//修改地图
void DownBlock(int(*map)[MAP_LENGHT], int(*block)[BLOCK_LENGHT]);//方块下降
void SetCursorPosition(int x, int y);//设置光标位置
void HideCursor();//隐藏光标
void Left(int(*map)[MAP_LENGHT]);//方块左移
void Right(int(*map)[MAP_LENGHT]);//方块右移

int main() {
	HideCursor();
	srand((unsigned)time(NULL));
	int map[MAP_WIDTH][MAP_LENGHT];//地图
	int block[BLOCK_WIDTH][BLOCK_LENGHT];//方块
	CreateMap(map);

	CreateBlock(block);
	CopyBlockToMap(map, block);
	PrintMap(map);//地图只打印一次
	while (1) {
		DownBlock(map,block);
		if (_kbhit()) {
			char ch = getch();
			switch (ch) {
			case 75:
				Left(map);
				break;
			case 77:
				Right(map);
				break;
			}
		}
	}
	return 0;
}

void CreateMap(int(*map)[MAP_LENGHT]) {
	//0表示边框
	//1表示内部可用空间
	//2表示正在下落的方块
	//3表示完成下落过程的方块
	for (int i = 1; i < MAP_WIDTH - 1; i++) {
		map[i][0] = 0;
		for (int j = 1; j < MAP_LENGHT - 1; j++) {
			map[i][j] = 1;
		}
		map[i][MAP_LENGHT - 1] = 0;
	}
	for (int j = 0; j < MAP_LENGHT; j++) {
		map[0][j] = 0;
		map[MAP_WIDTH - 1][j] = 0;
	}
}

void PrintMap(int(*map)[MAP_LENGHT]) {
	//system("cls");//闪屏的解决办法指定光标输出，不要用清屏
	for (int i = 0; i < MAP_WIDTH; i++) {
		for (int j = 0; j < MAP_LENGHT; j++) {
			SetCursorPosition(j * 2, i);
			switch (map[i][j]) {
			case 0:
				printf("★");
				break;
			case 1:
				printf("  ");
				break;
			case 2:
				printf("■");
				break;
			case 3:
				printf("■");
				break;
			}
			//if (j == MAP_LENGHT - 1)printf("\n");
		}
	}
}

void CreateBlock(int(*block)[BLOCK_LENGHT]) {
	block[0][0] = 1; block[0][1] = 1; block[0][2] = 1; block[0][3] = 1;
	block[1][0] = 1; block[1][1] = 1; block[1][2] = 1; block[1][3] = 1;
	int kind = rand() % 7;
	switch (kind) {
	case 0:
		block[0][0] = 2; block[0][1] = 2; block[0][2] = 1; block[0][3] = 1;
		block[1][0] = 2; block[1][1] = 2; block[1][2] = 1; block[1][3] = 1;
		break;
	case 1:
		block[0][0] = 1; block[0][1] = 1; block[0][2] = 1; block[0][3] = 1;
		block[1][0] = 2; block[1][1] = 2; block[1][2] = 2; block[1][3] = 2;
		break;
	case 2:
		block[0][0] = 1; block[0][1] = 2; block[0][2] = 1; block[0][3] = 1;
		block[1][0] = 2; block[1][1] = 2; block[1][2] = 2; block[1][3] = 1;
		break;
	case 3:
		block[0][0] = 2; block[0][1] = 2; block[0][2] = 2; block[0][3] = 1;
		block[1][0] = 1; block[1][1] = 1; block[1][2] = 2; block[1][3] = 1;
		break;
	case 4:
		block[0][0] = 2; block[0][1] = 2; block[0][2] = 2; block[0][3] = 1;
		block[1][0] = 2; block[1][1] = 1; block[1][2] = 1; block[1][3] = 1;
		break;
	case 5:
		block[0][0] = 2; block[0][1] = 2; block[0][2] = 1; block[0][3] = 1;
		block[1][0] = 1; block[1][1] = 2; block[1][2] = 2; block[1][3] = 1;
		break;
	case 6:
		block[0][0] = 1; block[0][1] = 2; block[0][2] = 2; block[0][3] = 1;
		block[1][0] = 2; block[1][1] = 2; block[1][2] = 1; block[1][3] = 1;
		break;
	}
}

void CopyBlockToMap(int(*map)[MAP_LENGHT], int(*block)[BLOCK_LENGHT]) {
	int mid_lenght = MAP_LENGHT / 2 - 2;
	for (int i = 0; i < BLOCK_WIDTH; i++) {
		for (int j = 0; j < BLOCK_LENGHT; j++) {
			map[i + 1][j + mid_lenght] = block[i][j];
		}
	}
}

void DownBlock(int(*map)[MAP_LENGHT],int(*block)[BLOCK_LENGHT]) {
	Sleep(300);
	for (int i = MAP_WIDTH - 2; i > 0; i--) {
		for (int j = 1; j < MAP_LENGHT - 1; j++) {
			//先判断能不能下落：当下落的方块下面是边框或者是已经完成下落的方块就不能再下落了
			if (map[i][j] == 2 && (map[i + 1][j] == 0 || map[i + 1][j] == 3)) {
				//把2变成3
				for (int i = 1; i < MAP_WIDTH - 1; i++) {
					for (int j = 1; j < MAP_LENGHT - 1; j++) {
						if (map[i][j] == 2) {
							map[i][j] = 3;
						}
					}
				}
				//重新生成方块
				CreateBlock(block);
				CopyBlockToMap(map, block);
				return;
			}
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j] = 2;
				//打印方块
				SetCursorPosition(j * 2, i + 1);
				printf("■");
				SetCursorPosition(j * 2, i);
				printf("  ");
			}
		}
	}
}

void SetCursorPosition(int x, int y) {
	HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD pos = { x,y };
	SetConsoleCursorPosition(hOut, pos);
}

//定义隐藏光标函数
void HideCursor()
{
	CONSOLE_CURSOR_INFO cursor;
	cursor.bVisible = FALSE;
	cursor.dwSize = sizeof(cursor);
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	SetConsoleCursorInfo(handle, &cursor);
}

void Left(int(*map)[MAP_LENGHT]) {
	for (int j = 1; j < MAP_LENGHT - 1; j++) {
		for (int i = 1; i < MAP_WIDTH - 1; i++) {
			//先判断能不能左移,当方块左边是墙或者是其它方块便不能左移
			if (map[i][j] == 2 && (map[i][j - 1] == 0 || map[i][j - 1] == 3))return;
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j - 1] = 2;
				//打印方块
				SetCursorPosition((j - 1) * 2, i + 1);
				printf("■");
				SetCursorPosition(j * 2, i);
				printf("  ");
			}
		}
	}
}

void Right(int(*map)[MAP_LENGHT]) {
	for (int j = MAP_LENGHT - 2; j > 0; j--) {
		for (int i = 1; i < MAP_WIDTH - 1; i++) {
			//先判断能不能左移,当方块左边是墙或者是其它方块便不能左移
			if (map[i][j] == 2 && (map[i][j + 1] == 0 || map[i][j + 1] == 3))return;
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j + 1] = 2;
				//打印方块
				SetCursorPosition((j + 1) * 2, i + 1);
				printf("■");
				SetCursorPosition(j * 2, i);
				printf("  ");
			}
		}
	}
}