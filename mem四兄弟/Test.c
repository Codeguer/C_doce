#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<assert.h>
void my_memcpy(void *p1, const void*p2, size_t num)
{
	assert(p1&&p2);
	char*cp1 =(void*) p1;
	while (num)
	{
		*cp1 = *((char*)p2);
		cp1++;
		((char*)p2)++;
		num--;
	}
}

void my_memmove( void *p1, const void*p2, size_t num)
{
	assert(p1&&p2);
	char*cp1 = (char*)p1;
	char*cp2 = (char*)p2;
	size_t tmp = num-1;
	
	if (cp1 > cp2)
	{
		while (tmp)
		{
			cp1++;
			cp2++;
			tmp--;
		}
		while (num)
		{
			*cp1 = *cp2;
			cp1--;
			cp2--;
			num--;
		}
	}
	else
	{
		while (num)
		{
			*cp1 = *cp2;
			cp1++;
			cp2++;
			num--;
		}
	}
	


}
int main()
{
	char a[] = "I am a student";
	char b[40] = "0";
	memcpy(b, a, 15);
	printf("%s\n", b);
	my_memcpy(b, "I am a student\0 and can you help me?", 22);
	printf("%s\n", b);
	my_memcpy(b, "I am a student\0 and can you help me?",37);
	//memcpy(b+2, b, 4);//行为未定义，结果与memmove相同
	my_memcpy(b+2, b, 4);
	my_memcpy(b, "I am a student\0 and can you help me?", 37);
	my_memmove(b + 2, b, 4);
	my_memcpy(b, "I am a student\0 and can you help me?", 37);
	my_memmove(b, b + 2, 4);
	return 0;
}