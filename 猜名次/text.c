//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<stdlib.h>
//#include<time.h>
//#include<string.h>
///*
//5λ�˶�Ա�μ���10��̨��ˮ����������������Ԥ����������
//Aѡ��˵��B�ڶ����ҵ�����
//Bѡ��˵���ҵڶ���E���ģ�
//Cѡ��˵���ҵ�һ��D�ڶ���
//Dѡ��˵��C����ҵ�����
//Eѡ��˵���ҵ��ģ�A��һ��
//����������ÿλѡ�ֶ�˵����һ�룬����ȷ�����������Ρ�
//*/
///*
//Aѡ��˵��B2��A3��
//Bѡ��˵��B2��E4��
//Cѡ��˵��C1��D2��
//Dѡ��˵��C5��D3��
//Eѡ��˵��E4��A1��
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
//	char arr[5][3] = { 0 };//�洢ÿλѡ����ȷ�Ļ�
//	char srr[5][3] = { 0 };//�洢ÿλѡ�ִ���Ļ�
//	int i = 0;
//	int j = 0;
//	char brr[5][3] = { "A1","B1" ,"C1" ,"D1" ,"E1" };//����ȫΪ��һ��
//	while (1)
//	{
//		error:
//			randget(arr, srr, A, 0);//��ÿλѡ�ֵ���������������ѡ��
//			//��ȷ�ķ���arr�У�����ķ���srr��
//			randget(arr, srr, B, 1);
//			randget(arr, srr, C, 2);
//			randget(arr, srr, D, 3);
//			randget(arr, srr, E, 4);
//			for (i = 0; i < 5; i++)//��arr��srr������ͬ����������ų�
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
//			for (i = 0; i < 5; i++)//��arr����A1,A3����������ų�
//			{
//				for (j = 0; j < 5; j++)
//				{
//					if (strcmp(arr[i],srr[j])==0)
//					{
//							goto error;
//					}
//				}
//			}
//			for (i = 0; i < 5; i++)//��arr����B2,D2����������ų�
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
//			//printf("��ȷ\n");//����
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