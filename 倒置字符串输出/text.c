#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//��Ŀ��������һ�仰�ĵ������е��ã���㲻���ã�����I like beijing.�����������Ϊbeijing.like I
//����������ÿ�������������һ������������I like beijing.�����������Ȳ�����100
//������������ת��
//��һ�������ַ����������� .gnijieb ekil I
//�ڶ���������һ���õ����ַ����е�ÿ�����ʽ�������beijing. like I
void reverse(char*arr,int left,int right)
{
	while (left < right)
	{
		char tmp = 0;
		tmp = arr[left];
		arr[left] = arr[right];
		arr[right] = tmp;
		left++;
		right--;
	}
}
int main()
{
	char arr[101] = { 0 };
	gets(arr);
	int left = 0;
	int right = strlen(arr) - 1;
	int end = 0;
	reverse(arr,left,right);//��һ�������
	//�ڶ������ܿո���ҵ��ʽ�������
	while (arr[left])
	{
		while (arr[left] == ' ')
		{
			left++;
		}//��֤��ǰarr[left]��Ϊ�ո�
		end = left;
		while ((arr[end] != ' ') &&( arr[end] != '\0'))
		{
			end++;
		}
		//���ڵ�endָ���˿ո����'\0'
		reverse(arr, left, end - 1);
		left = end;
	}
	left = 0;
	for (int i = 0; i <= right; i++)//����ַ���
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}