#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
//题目描述：将一句话的单纯进行倒置，标点不倒置，比如I like beijing.经过函数后变为beijing.like I
//输入描述：每个测试输入包含一个测试用例：I like beijing.输入用例长度不超过100
//方法：三步翻转法
//第一步：将字符串整体逆序： .gnijieb ekil I
//第二步：将第一步得到的字符串中的每个单词进行逆序beijing. like I
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
	reverse(arr,left,right);//第一步完成了
	//第二步不管空格就找单词进行逆序
	while (arr[left])
	{
		while (arr[left] == ' ')
		{
			left++;
		}//保证当前arr[left]不为空格
		end = left;
		while ((arr[end] != ' ') &&( arr[end] != '\0'))
		{
			end++;
		}
		//现在的end指向了空格或者'\0'
		reverse(arr, left, end - 1);
		left = end;
	}
	left = 0;
	for (int i = 0; i <= right; i++)//输出字符串
	{
		printf("%c", arr[i]);
	}
	printf("\n");
	return 0;
}