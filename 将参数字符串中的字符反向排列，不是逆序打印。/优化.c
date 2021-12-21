#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void  reverse_string(char a[],int count)
{
	char tmp = '0';
	tmp = *a;
	*a = *(a + count - 1);
	*(a + count - 1) = '\0';
	if(my_strlen(a+1) >=2)
		reverse_string(a+1, my_strlen(a+1));
	*(a + count - 1) = tmp;
}
int my_strlen(char a[])
{
	int i = 0;
	int count = 0;
	for (i = 0; a[i] != '\0'; i++)
	{
		count++;
	}
	return count;
}
int main()
{
	int i = 0;
	char a[] = "abcdef";
	printf("逆序前数组a为%s\n", a);
	reverse_string(a,my_strlen(a));
	printf("逆序后数组a为%s\n", a);
	return 0;
}