#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//����ˮ��1ƿ��ˮ1Ԫ��2����ƿ���Ի�һƿ��ˮ����20Ԫ�����Զ�����ˮ
int cal(int num)
{
	if (num >= 2)
		return 2 + cal(num - 1);//��ƿ��ƿ��
	else
		return num;
		
}
int main()
{
	int money = 0;
	int num = 0;
	scanf("%d", &money);
	num = money;
	printf("���Ժȵ�%dƿ��ˮ\n", cal(num));
	return 0;
}
//int main()
//{
//	int money = 0;
//	int total = 0;
//	scanf("%d", &money);
//	if (money > 0)
//		total = 2 * money - 1;
//	printf("%d\n", total);
//	return 0;
//}