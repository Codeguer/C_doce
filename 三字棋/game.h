#define _CRT_SECURE_NO_WARNINGS 1
//������ͷ�ļ�
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


//�����ʶ������
#define LENGTH	9  //���̳���
#define WIDE    9  //���̿��
//��Ϊʱ������Ŀǰֻ������3��9����

//��������
void menu();//��ʼ��ӡ��Ϸ�˵�

void player(char arr[LENGTH][WIDE], int len, int  wide);//�������
void computer(char arr[LENGTH][WIDE], int len, int  wide);//��������

void initboard(char arr[LENGTH][WIDE], int len, int  wide);//��ʼ����Ϸ����

void initarr(char arr[][WIDE], int len, int wide);//��ʼ������

char textwin(char arr[][WIDE], int len, int wide);//�����Ϸ����
//���� '* '�����Ӯ
//���ء�X�������Ӯ
//���� 'c' ����Ϸ����
//���� 'o' ����Ϸƽ��


int result(char arr[][WIDE], int len, int wide);//��textwin������д���

void game();//��Ϸ����