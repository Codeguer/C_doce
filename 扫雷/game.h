#define _CRT_SECURE_NO_WARNINGS 1
//������ͷ�ļ�
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//��ʶ������
#define ROW 6//���׵�����
#define COL 6//���׵�����
#define COUNT 20//������

#define ROWS ROW+2//��ֹԽ�߽����Ǽ�2
#define COLS COL+2

//��������

void menu();//��Ϸ�˵�
void game();//��Ϸ����
void setmine(char mine[ROWS][COLS], int row, int col);//���õ���
void setbattle(char battle[ROWS][COLS], int row, int col,char sym);//����ս��
void InitBattle(char mine[ROWS][COLS], int row, int col);//���ս��
int testmine(char mine[ROW][COL], int x, int y);//������ŵĵر��Ƿ��е��ף������Ƿ��е��׵��������
//����1˵���ȵ��˵�����Ϸʧ��
//����0˵��δ�ȵ�����
char testcount(char mine[ROWS][COLS], int rows, int cols, int x, int y);//������ŵĵر������ж�����
int testwin(char battle[ROWS][COLS], int row, int col);//����Ƿ�ʤ��