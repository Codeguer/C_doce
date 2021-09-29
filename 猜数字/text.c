#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>//standard library标准库
#include<time.h>
//RAND_MAX==‭32767‬
void menu()//游戏菜单
{
	printf("*********************************\n");
	printf("************按1：Play************\n");
	printf("************按0：exit************\n");
	printf("*********************************\n");
}
void game()
{
	int digital;
	digital = rand()%100;//头文件为stdlib.h,返回了0~32767的伪随机数，使用rand之前需要使用srand()函数
	//int rand( void );
	int number = 0;
	while (1)
	{
		printf("输入你要猜的数字：");
		scanf("%d", &number);
		if (number == digital)
		{
			printf("恭喜你猜中了\n");
			break;
		}
		else if (number < digital)
		{
			printf("输小了\n");
			continue;
		}
		else
		{
			printf("输大了\n");
			continue;
		}
	}
	return 0;
}
int main()
{
	srand((unsigned int)time(NULL));//srand头文件是stdlib.h,void srand( unsigned int seed )
	//使用了time函数，头文件为time.h    time_t time( time_t *timer );NULL是一个空指针
	//time_t是结构体类型，本质上是一种整型类型
	//time将当前时间转换为时间戳，时间戳就是一串数字，当前时间相较于计算机起始时间的差值换算成以秒为单位的数字
	//srand函数只需要执行一次就可以了不然就会造成随机数不够随机
	//srand()根据所获得的数据产生所对应的固定的值，然后给rand()，rand就会给出固定的值，因此srand()不能重复执行。
	int option = 2;
	do
	{
		menu();
		scanf("%d", &option);
		switch (option)
		{
		 case 1:
			 game();
			 break;
		 case 0:
			 break;
		 default:
			 continue;
		}
		
	} while (option);
	return 0;
}