#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
//模拟实现atoi
//atoi把数字型字符串转化为整型数
//int atoi( const char *string );
enum State
{
	UNVALID,//0
	VALID//1
};
enum State state = UNVALID;

int my_atoi(const char *p)
{
	int flag = 1;//正负号
	int num = 0;//出现正负号的个数
	long long ret = 0;//-9223372036854775808~9223372036854775807
	const char *k = p;
	if (p == NULL)
	{
		perror("my_attoi:p");
		return 0;
	}
	while (1)
	{
		if (isspace(*k))//如果等于空格
		{
			k++;
			continue;
		}
		else if (*k == '+')// "   +  123"
		{
			k++;
			num++;
			continue;
		}
		else if (*k == '-')// "   +  123"
		{
			k++;
			num--;
			flag = -1;
			continue;
		}
		else if (isdigit(*k))
		{
			if (num > 1)
			{
				return 0;
			}
			int i = 0;
			for (i = 0; *(k + i) != 0 && isspace(*(k + i)) == 0; i++)//判断既不为0也不为空格
			{
				if (isdigit(*(k + i)) == 0)
				{
					return 0;
				}
				ret = (long long)(*(k + i)-'0') + ret * 10;
				

			}
			ret *= flag;
			if (ret >(long long) 2147483647 || ret  < -(long long)2147483648)//(long long)-2147483648
				//写成这样就会报错，原因是2147483648是无符号数，-1不能对无符号数进行运算，因为-1无法将其改为有符号数
				return 0;
			state = VALID;
			return (int)ret;
		}
		else
			return 0;
	}
	return 0;
}
int main()
{
	char arr[] = "-1234 65";
	printf(" my_atoi(arr)=%d\n", my_atoi(arr));
	printf(" atoi(arr)=%d\n", atoi(arr));
	return 0;
}