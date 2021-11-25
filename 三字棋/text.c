#include"game.h"

//测试游戏的逻辑
int main()
{
	srand((unsigned int) time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("输入1进入游戏或者输入0退出游戏\n");
		scanf("%d", &input);
		switch (input)
		{
			case 1:
				game();
				break;
			case 0:
				break;
			default:
				break;
		}
	} while (input);
	
	return 0;
}