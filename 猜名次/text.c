//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
///*
//5位运动员参加了10米台跳水比赛，有人让他们预测比赛结果：
//A选手说：B第二，我第三；
//B选手说：我第二，E第四；
//C选手说：我第一，D第二；
//D选手说：C最后，我第三；
//E选手说：我第四，A第一；
//比赛结束后，每位选手都说对了一半，请编程确定比赛的名次。
//*/
///*
//A选手说：B2，A3；
//B选手说：B2，E4；
//C选手说：C1，D2；
//D选手说：C5，D3；
//E选手说：E4，A1；
//*/
//void randget(char arr[][3], char srr[][3], char A[][3],int i)
//{
//	if (rand() % 2 == 0)
//	{
//		strcpy(arr[i] ,A[0]);
//		strcpy(srr[i], A[1]);
//	}
//	else
//	{
//		strcpy(arr[i], A[1]);
//		strcpy(srr[i], A[0]);
//	}
//	i++;
//}
//int main()
//{
//	srand((unsigned int)time(NULL));
//	char A[2][3] = { "B2","A3" };
//	char B[2][3] = { "B2","E4" };
//	char C[2][3] = { "C1","D2" };
//	char D[2][3] = { "C5","D3" };
//	char E[2][3] = { "E4","A1" };
//	char arr[5][3] = { 0 };//存储每位选手正确的话
//	char srr[5][3] = { 0 };//存储每位选手错误的话
//	int i = 0;
//	int j = 0;
//	char brr[5][3] = { "A1","B1" ,"C1" ,"D1" ,"E1" };//假设全为第一名
//	while (1)
//	{
//		error:
//			randget(arr, srr, A, 0);//对每位选手的两个结果进行随机选择
//			//正确的放在arr中，错误的放在srr中
//			randget(arr, srr, B, 1);
//			randget(arr, srr, C, 2);
//			randget(arr, srr, D, 3);
//			randget(arr, srr, E, 4);
//			for (i = 0; i < 5; i++)//对arr与srr中有相同的情况进行排除
//			{
//				for (j = i + 1; j < 5; j++)
//				{
//					if (arr[i][0]==arr[j][0] )
//					{
//						if (arr[i][1]!=arr[j][1])
//						{
//							goto error;
//						}
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)//若arr出现A1,A3的情况进行排除
//			{
//				for (j = 0; j < 5; j++)
//				{
//					if (strcmp(arr[i],srr[j])==0)
//					{
//							goto error;
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)//若arr出现B2,D2的情况进行排除
//			{
//				for (j = i + 1; j < 5; j++)
//				{
//					if (arr[i][1] == arr[j][1])
//					{
//						if (arr[i][0] != arr[j][0])
//						{
//							goto error;
//						}
//					}
//				}
//			}
//			//printf("正确\n");//测试
//			//for (i = 0; i < 5; i++)
//			//{
//			//	printf("%s ", arr[i]);
//			//}
//			//printf("\n");
//			//for (i = 0; i < 5; i++)
//			//{
//			//	printf("%s ", srr[i]);
//			//}
//			//printf("\n");
//			for (i = 0; i < 5; i++)
//			{
//				if (arr[i][0] == 'A')
//				{
//					if (strcmp(arr[i], brr[0]) > 0)
//					{
//						strcpy( brr[0], arr[i]);
//					}
//				}
//				else if (arr[i][0] == 'B')
//				{
//					if (strcmp(arr[i], brr[1]) > 0)
//					{
//						strcpy(brr[1], arr[i]);
//					}
//				}
//				else if (arr[i][0] == 'C')
//				{
//					if (strcmp(arr[i], brr[2]) > 0)
//					{
//						strcpy(brr[2], arr[i]);
//					}
//				}
//				else if (arr[i][0] == 'D')
//				{
//					if (strcmp(arr[i], brr[3]) > 0)
//					{
//						strcpy(brr[3], arr[i]);
//					}
//				}
//				else if (arr[i][0] == 'E')
//				{
//					if (strcmp(arr[i], brr[4]) > 0)
//					{
//						strcpy(brr[4], arr[i]);
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)
//			{
//				printf("%s ", brr[i]);
//			}
//			break;
//	}
//	return 0;
//}