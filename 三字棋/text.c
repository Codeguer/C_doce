#include"game.h"

//������Ϸ���߼�
int main()
{
	srand((unsigned int) time(NULL));
	int input = 1;
	do
	{
		menu();
		printf("����1������Ϸ��������0�˳���Ϸ\n");
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