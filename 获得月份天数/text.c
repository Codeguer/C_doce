#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//�������룬һ���������������ֱ��ʾ��ݺ��·ݣ��ÿո�ָ���
//���������
//���ÿ�����룬���Ϊһ�У�һ����������ʾ��һ��������ж����졣
int isyear(int year)
{
	if (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0))
		return 1;
	return 0;
}

int main()
{
	int year = 0;
	int month = 0;
	isyear(year);
	while (scanf("%d %d", &year, &month)!=EOF)//ʹ��ѭ����Ҳ�����˻�������ʵ�ֶ���������2021 5 2020 6ENTER(��enter������ֹѭ����
	{
		if (1 == month || 3 == month || 5 == month || 7 == month || 8 == month || 10 == month || 12 == month)
		{
			printf("%d\n", 31);
		}
		else if (4 == month || 6 == month || 9 == month || 11 == month)
		{
			printf("%d\n", 30);
		}
		else if (isyear(year))
		{
			printf("%d\n", 29);
		}
		else
		{
			printf("%d\n", 28);
		}
	}
	
	
	return 0;
}