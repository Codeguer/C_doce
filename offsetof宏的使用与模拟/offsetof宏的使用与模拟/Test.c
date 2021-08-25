#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stddef.h>

#define OFFSETOF(struct_name,struct_member) ((int)&(((struct_name*)0)->struct_member))
typedef struct S
{
	int age;//0~3
	char name[10];//4~13
	float b;//16~19
	double c;//24~31
	//0~31，一共32个大小，正好是最大对齐数8的整数倍
}S;

//size_t offsetof( structName, memberName );


int main()
{	
	printf("%d\n", sizeof(S));
	printf("%d\n", offsetof(S, age));
	printf("%d\n", offsetof(S, name));
	printf("%d\n", offsetof(S, b));
	printf("%d\n", offsetof(S, c));

	printf("%d\n", OFFSETOF(S, age));
	printf("%d\n", OFFSETOF(S, name));
	printf("%d\n", OFFSETOF(S, b));
	printf("%d\n", OFFSETOF(S, c));
	return 0;
}