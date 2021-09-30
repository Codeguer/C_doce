//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////日本某地发生了一件谋杀案，警察通过排查确定杀人凶手必为4个嫌疑犯的一个。
////以下为4个嫌疑犯的供词 :
////A说：不是我。
////B说：是C。
////C说：是D。
////D说：C在胡说
////已知3个人说了真话，1个人说的是假话。
////现在请根据这些信息，写一个程序来确定到底谁是凶手。
//int iskiller(char arr2[4][3],char arr3[4][3], char arr4[4][6])
//{
//	int num[4] = { 0 };
//	char srr[4][6] = { 0 };
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//			if (strcmp(arr3[i], "A0") == 0)
//			{
//					strcpy(srr[0], arr4[0]);
//					strcpy(arr4[0], "true");
//					if (num[0] != 0&&strcmp(srr[0],arr4[0])==0)
//					{
//						num[0]--;
//					}
//					num[0] ++;	
//			}
//			else if (strcmp(arr3[i], "A1") == 0)
//			{
//				strcpy(srr[0], arr4[0]);
//				strcpy(arr4[0], "flase");
//				if (num[0] != 0 && strcmp(srr[0], arr4[0]) == 0)
//				{
//					num[0]--;
//				}
//				num[0] ++;
//			}
//			else if (strcmp(arr3[i], "B0") == 0)
//			{
//				strcpy(srr[0], arr4[1]);
//				strcpy(arr4[1], "true");
//				if (num[1] != 0 && strcmp(srr[0], arr4[1]) == 0)
//				{
//					num[1]--;
//				}
//				num[1]++;
//			}
//			else if (strcmp(arr3[i], "B1") == 0)
//			{
//				strcpy(srr[0], arr4[1]);
//				strcpy(arr4[1], "false");
//				if (num[1] != 0 && strcmp(srr[0], arr4[1]) == 0)
//				{
//					num[1]--;
//				}
//				num[1]++;
//			}
//		    else if (strcmp(arr3[i], "C0") == 0)
//			{
//				strcpy(srr[0], arr4[2]);
//				strcpy(arr4[2], "true");
//				if (num[2] != 0 && strcmp(srr[0], arr4[2]) == 0)
//				{
//					num[2]--;
//				}
//				num[2]++;
//			}
//			else if (strcmp(arr3[i], "C1") == 0)
//			{
//				strcpy(srr[0], arr4[2]);
//				strcpy(arr4[2], "false");
//				if (num[2] != 0 && strcmp(srr[0], arr4[2]) == 0)
//				{
//					num[2]--;
//				}
//				num[2]++;
//			}
//			else if (strcmp(arr3[i], "D0") == 0)
//			{
//				strcpy(srr[0], arr4[3]);
//				strcpy(arr4[3], "true");
//				if (num[3] != 0 && strcmp(srr[0], arr4[3]) == 0)
//				{
//					num[3]--;
//				}
//				num[3]++;
//			}
//			else if (strcmp(arr3[i], "D1") == 0)
//			{
//				strcpy(srr[0], arr4[3]);
//				strcpy(arr4[3], "false");
//				if (num[3] != 0 && strcmp(srr[0], arr4[3]) == 0)
//				{
//					num[3]--;
//				}
//				num[3]++;
//			}
//			
//		
//		
//	}
//	for (i = 0; i < 4; i++)
//	{
//		if (num[i] > 1)
//			return 0;
//	}
//	return 1;
//}
//int main()
//{
//	char arr1[4][3] = {"A1","C0" ,"D0" ,"D1" };//假设全说真话,a1表示a不是凶手
//	char arr2[4][3] = { "A0","C1" ,"D1" ,"D0" };//假设全说假话
//	char arr3[4][3] = { 0 };//记录谁说了真话谁说了假话
//	char arr4[4][6] = { "false","false","false","false" };//ture为凶手，false不是凶手
//	char arr5[4] = { 'A','B','C','D' };//记录四个人的名字
//	int brr[4] = { 1,1,1,1 };//说真话的记为1，说假话的记为0
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		brr[i] = 0;//假设这个人说慌了
//		while (j < 4)//记录谁说了真话谁说了假话
//		{
//			if (brr[j] == 0)
//			{
//				strcpy(arr3[j], arr2[j]);
//			}
//			else
//				strcpy(arr3[j], arr1[j]);
//			j++;
//		}
//		if (iskiller(arr2, arr3, arr4))
//		{
//			int count = 0;//记录ture的个数
//			for (j = 0; j < 4; j++)
//			{
//				if (strcmp(arr4[j], "true") == 0)
//					count++;
//			}
//			if (count == 1)
//			{
//				for (j = 0; j < 4; j++)
//				{
//					if (strcmp(arr4[j], "true") == 0)
//					{
//						printf("凶手为:%c\n", arr5[j]);
//						return 0;
//					}
//				}
//				
//			}
//		}
//		
//		brr[i] = 1;//还原这个数组
//		for (j = 0; j < 4; j++)
//		{
//			strcpy(arr4[j], "false");//还原arr4
//		}
//	}
//	return 0;
//}