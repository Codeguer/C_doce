#include"game.h"


int main()
{
	srand((unsigned int)time(NULL));
	int OPTION = -1;
	do
	{
		int tmp;
		menu();
		printf("����1����Ϸ����0�˳���Ϸ��\n");
	error:
		 tmp = 0;//������뺯���Ļ�����
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
				printf("����������������룺");
				goto error;
		}

	} while (OPTION);
	return 0;
}




void menu()
{
	printf("-----------------ɨ �� �� Ϸ--------------------\n");
	printf("------------------1 : PLAY----------------------\n");
	printf("------------------0 : EXIT ---------------------\n");
	printf("------------------------------------------------\n");
}