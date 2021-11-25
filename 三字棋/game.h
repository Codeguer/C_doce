#define _CRT_SECURE_NO_WARNINGS 1
//包含的头文件
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//定义标识符常量
#define LENGTH	9  //棋盘长度
#define WIDE    9  //棋盘宽度
//因为时间有限目前只适用于3到9字棋

//函数声明
void menu();//开始打印游戏菜单

void player(char arr[LENGTH][WIDE], int len, int  wide);//玩家下棋
void computer(char arr[LENGTH][WIDE], int len, int  wide);//电脑下棋

void initboard(char arr[LENGTH][WIDE], int len, int  wide);//初始化游戏棋盘

void initarr(char arr[][WIDE], int len, int wide);//初始化数组

char textwin(char arr[][WIDE], int len, int wide);//检测游戏进程
//返回 '* '则玩家赢
//返回‘X’则电脑赢
//返回 'c' 则游戏继续
//返回 'o' 则游戏平局


int result(char arr[][WIDE], int len, int wide);//对textwin结果进行处理

void game();//游戏主体