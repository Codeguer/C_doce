#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void Lcir(char arr[],int sz,int k)
{
	int i = 0;
	char tmp = 0;
	int j = 0;
	for (i = 0; i < k; i++)
	{
		for (j = k - i; j < sz-i; j++)
		{
			tmp = arr[j - 1];
			arr[j - 1] = arr[j];
			arr[j] = tmp;
		}
	}
}
int main()
{
	int k = 0;
	char arr[] = "ABCDEFG";
	int sz = strlen(arr);
	k = 2;
	if (k > 0)
		Lcir(arr, sz,k);
	printf("%s\n", arr);
	return 0;
}