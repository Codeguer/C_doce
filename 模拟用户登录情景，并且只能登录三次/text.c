#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<Windows.h>
int main()
{
	int i = 0;
	char arr[20] = { 0 };
	for (i = 0; i < 3; i++)
	{
		printf("���������룺");
		scanf("%s", arr);//������123456����ʱarr[20]="1234560000000000000"
		if (strcmp(arr, "123456") == 0)//strcmpΪ�ַ����ȽϺ���
			//if(password=="123456")//�����ڱȽϵ�ַ���Ƚϵ�ַ��û�������
			/*
				����< 0 ����string1 less than string2 
                ����  0     string1 identical to string2 
                ���� > 0����string1 greater than string2 

			*/
		{
			printf("����������ȷ\n");
			break;
		}
		else
		{
			if (2 - i == 0)continue;
			printf("�����������������%d�λ��ᣬ����������", 2 - i);
		}
	}
	if (3 == i)
	{
		printf("����ȷ��ʧ�ܣ�����3S��������η���");
		Sleep(3000);//��λ��ms��ͷ�ļ���windows.h,VC��Sleep, ���һ��ʹ��sleep
	}
	return 0;
}