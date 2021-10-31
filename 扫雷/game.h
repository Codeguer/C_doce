#define _CRT_SECURE_NO_WARNINGS 1
//包含的头文件
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>

//标识符常量
#define ROW 6//地雷的行数
#define COL 6//地雷的列数
#define COUNT 20//地雷数

#define ROWS ROW+2//防止越边界于是加2
#define COLS COL+2

//函数声明

void menu();//游戏菜单
void game();//游戏主体
void setmine(char mine[ROWS][COLS], int row, int col);//设置地雷
void setbattle(char battle[ROWS][COLS], int row, int col,char sym);//设置战场
void InitBattle(char mine[ROWS][COLS], int row, int col);//输出战场
int testmine(char mine[ROW][COL], int x, int y);//检测所排的地标是否有地雷，并将是否有地雷的情况返回
//返回1说明踩到了地雷游戏失败
//返回0说明未踩到地雷
char testcount(char mine[ROWS][COLS], int rows, int cols, int x, int y);//检测所排的地标四周有多少雷
int testwin(char battle[ROWS][COLS], int row, int col);//检测是否胜利