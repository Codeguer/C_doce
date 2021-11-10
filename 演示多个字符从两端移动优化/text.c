#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<windows.h>
int main()
{
	char arr[] = "welcome to bit!!!!!";
	char arr1[] = "*******************";
	int left = 0;
	int right = strlen(arr)-1;
	while (left <= right)
	{
		arr1[left] = arr[left];
		arr1[right] = arr[right];
		printf("%s\n", arr1);
		left++;
		right--;
		Sleep(1000);//单位是ms
		system("cls");//清空屏幕
	}
	printf("%s", arr1);
	return 0;
}