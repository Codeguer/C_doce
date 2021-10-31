#include"game.h"


int main()
{
	srand((unsigned int)time(NULL));
	int OPTION = -1;
	do
	{
		int tmp;
		menu();
		printf("输入1玩游戏输入0退出游戏：\n");
	error:
		 tmp = 0;//清空输入函数的缓冲区
		scanf("%d", &OPTION);
		while (tmp != '\n')
		{
			tmp = getchar();
		}
		switch (OPTION)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				printf("输入错误，请重新输入：");
				goto error;
		}

	} while (OPTION);
	return 0;
}




void menu()
{
	printf("-----------------扫 雷 游 戏--------------------\n");
	printf("------------------1 : PLAY----------------------\n");
	printf("------------------0 : EXIT ---------------------\n");
	printf("------------------------------------------------\n");
}