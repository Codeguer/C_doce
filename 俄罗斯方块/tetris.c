#include<stdio.h>
#include<stdlib.h>
#include<Windows.h>
#include<time.h>

#define MAP_LENGHT 12
#define MAP_WIDTH 22
#define BLOCK_LENGHT 4
#define BLOCK_WIDTH 2	

void CreateMap(int(*map)[MAP_LENGHT]);//������ͼ
void PrintMap(int(*map)[MAP_LENGHT]);//��ӡ��ͼ
void CreateBlock(int(*block)[BLOCK_LENGHT]);//���ɷ���
void CopyBlockToMap(int(*map)[MAP_LENGHT], int(*block)[BLOCK_LENGHT]);//�޸ĵ�ͼ
void DownBlock(int(*map)[MAP_LENGHT], int(*block)[BLOCK_LENGHT]);//�����½�
void SetCursorPosition(int x, int y);//���ù��λ��
void HideCursor();//���ع��
void Left(int(*map)[MAP_LENGHT]);//��������
void Right(int(*map)[MAP_LENGHT]);//��������

int main() {
	HideCursor();
	srand((unsigned)time(NULL));
	int map[MAP_WIDTH][MAP_LENGHT];//��ͼ
	int block[BLOCK_WIDTH][BLOCK_LENGHT];//����
	CreateMap(map);

	CreateBlock(block);
	CopyBlockToMap(map, block);
	PrintMap(map);//��ͼֻ��ӡһ��
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
	//0��ʾ�߿�
	//1��ʾ�ڲ����ÿռ�
	//2��ʾ��������ķ���
	//3��ʾ���������̵ķ���
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
	//system("cls");//�����Ľ���취ָ������������Ҫ������
	for (int i = 0; i < MAP_WIDTH; i++) {
		for (int j = 0; j < MAP_LENGHT; j++) {
			SetCursorPosition(j * 2, i);
			switch (map[i][j]) {
			case 0:
				printf("��");
				break;
			case 1:
				printf("  ");
				break;
			case 2:
				printf("��");
				break;
			case 3:
				printf("��");
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
			//���ж��ܲ������䣺������ķ��������Ǳ߿�������Ѿ��������ķ���Ͳ�����������
			if (map[i][j] == 2 && (map[i + 1][j] == 0 || map[i + 1][j] == 3)) {
				//��2���3
				for (int i = 1; i < MAP_WIDTH - 1; i++) {
					for (int j = 1; j < MAP_LENGHT - 1; j++) {
						if (map[i][j] == 2) {
							map[i][j] = 3;
						}
					}
				}
				//�������ɷ���
				CreateBlock(block);
				CopyBlockToMap(map, block);
				return;
			}
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j] = 2;
				//��ӡ����
				SetCursorPosition(j * 2, i + 1);
				printf("��");
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

//�������ع�꺯��
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
			//���ж��ܲ�������,�����������ǽ��������������㲻������
			if (map[i][j] == 2 && (map[i][j - 1] == 0 || map[i][j - 1] == 3))return;
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j - 1] = 2;
				//��ӡ����
				SetCursorPosition((j - 1) * 2, i + 1);
				printf("��");
				SetCursorPosition(j * 2, i);
				printf("  ");
			}
		}
	}
}

void Right(int(*map)[MAP_LENGHT]) {
	for (int j = MAP_LENGHT - 2; j > 0; j--) {
		for (int i = 1; i < MAP_WIDTH - 1; i++) {
			//���ж��ܲ�������,�����������ǽ��������������㲻������
			if (map[i][j] == 2 && (map[i][j + 1] == 0 || map[i][j + 1] == 3))return;
			if (map[i][j] == 2) {
				map[i][j] = 1;
				map[i + 1][j + 1] = 2;
				//��ӡ����
				SetCursorPosition((j + 1) * 2, i + 1);
				printf("��");
				SetCursorPosition(j * 2, i);
				printf("  ");
			}
		}
	}
}