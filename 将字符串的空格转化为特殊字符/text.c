#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
//例如字符串为We Are Happy,转化为We%20Are%20Happy

int main()
{
	char s[] = "We Are Happy";
	int length = strlen(s);
	int num=0;
	int i = 0;
	int j = 0;
	for (i = 0; i < length; i++)
	{
		if (s[i] == ' ')
			num++;
	}
	int newleng =length+2*num;
	char* arr = (char *)malloc(newleng +1);
	for (i = 0; i <=length; i++,j++)
	{
		if (s[i] == ' ')
		{
			*(arr + j) = '%';
			*(arr + j + 1) = '2';
			*(arr + j + 2) = '0';
			j += 2;
		}
		else
			*(arr+j) = s[i];
			
	}
	printf("%s\n", arr);




	free(arr);
	arr = NULL;
	return 0;
}