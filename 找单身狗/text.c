#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
//��Ŀ����
//һ��������ֻ���������ֳ���һ�Σ������������ֶ�����������
//��дһ�������ҳ�������ֻ����һ�ε�����
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,5,6,7,8,10,11,12};
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if (j != i)
//			{
//				if (arr[i] == arr[j])
//					break;
//			}
//		
//		}
//		if (j != sz)
//			continue;
//		printf("%d\n", arr[i]);
//	}
//
//
//	return 0;
//}

//����Ŀռ临�ӶȱȽϸ�
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10,11,12,1,2,3,5,6,7,8,10,11,12 };
	int ret = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int i = 0;
	int pos = 0;
	int num1 = 0;
	int num2 = 0;

	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	//0100
	//1001
	//1101//ĳһ��λ��Ϊ1����ô�������������λ�Ͽ϶���һ��Ϊ1��һ��Ϊ0
	//��ʱretΪ13��������Ϊ1101
	for (i = 0; i < 32; i++)//int32λ
	{
		//����ret����һλΪ1
		if (((ret >> i) & 1) == 1)//д��ret&1<<i,gcc�ᱨ����Ϊint���͵������ƿ��ܻ����
			break;
	}
	pos = i;
	for (i = 0; i < sz; i++)
	{
		if (((arr[i] >> pos) & 1) == 1)
		{
			num1 ^= arr[i];
		}
	}
	num2 = ret ^ num1;
	printf("%d %d\n", num1, num2);

	return 0;
}