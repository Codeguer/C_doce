#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
//ʹ��assert()���ԣ��ж�Ϊ���򱨴��ж�Ϊ����ʲô����Ҳ���ᷢ��
//ͷ�ļ�Ϊassert.h��assertΪһ������
char* my_strcpy(char* dest, const char* src)//�����Լ����Ż����ӷ���ֵ
{
	assert(src != NULL);//��src==NULLʱ����ΪAssertion failed: src != NULL,
	//file f:\����ļ��㼯\c����\project93\project93\text16_6_23.c, line 8
	assert(dest != NULL);
	char* ret = dest;
	while (*dest++ = *src++)//�����ﲻС��д��while (*src++ = *dest++)�ͻᱨ��
		//��Ϊarr1��arr2����arr1������arr2�ͻᱨ�����ԼӸ�const
		//void my_strcpy(char* dest, const char* src)
		//��ʹд���˱�����Ҳ��������಻��ȥ
	{
		;
	}
	return ret;//����Ŀ��ռ����ʼ��ַ
}


int main()
{
	char arr1[20] = "xxxxxxxxxx";
	char arr2[] = "hello";

	printf("%s\n", my_strcpy(arr1, arr2));
	return 0;
}
