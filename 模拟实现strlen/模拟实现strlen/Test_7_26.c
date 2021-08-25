#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//模拟实现strlen函数
//size_t strlen( const char *string );
//Each of these functions returns the number of characters in string, 
//excluding the terminal NULL. No return value is reserved to indicate an error.


size_t my_strlen(const char *p)
{
	if (p == NULL)
		return 0;
	size_t lenth = 0;
	while (*p != '\0')
	{
		lenth++;
		p++;
	}
	return lenth;
}
int main()
{
	printf("%u\n", my_strlen("I am a student"));
	printf("%u\n", my_strlen(""));
	long float a = 1;
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(float));
	return 0;
}