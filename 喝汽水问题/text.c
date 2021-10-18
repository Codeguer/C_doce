#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//喝汽水，1瓶汽水1元，2个空瓶可以换一瓶汽水，给20元，可以多少汽水
int cal(int num)
{
	if (num >= 2)
		return 2 + cal(num - 1);//两瓶两瓶喝
	else
		return num;
		
}
int main()
{
	int money = 0;
	int num = 0;
	scanf("%d", &money);
	num = money;
	printf("可以喝到%d瓶汽水\n", cal(num));
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