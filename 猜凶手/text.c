//#define _CRT_SECURE_NO_WARNINGS 1
//#include<stdio.h>
//#include<string.h>
////�ձ�ĳ�ط�����һ��ıɱ��������ͨ���Ų�ȷ��ɱ�����ֱ�Ϊ4�����ɷ���һ����
////����Ϊ4�����ɷ��Ĺ��� :
////A˵�������ҡ�
////B˵����C��
////C˵����D��
////D˵��C�ں�˵
////��֪3����˵���滰��1����˵���Ǽٻ���
////�����������Щ��Ϣ��дһ��������ȷ������˭�����֡�
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
//	char arr1[4][3] = {"A1","C0" ,"D0" ,"D1" };//����ȫ˵�滰,a1��ʾa��������
//	char arr2[4][3] = { "A0","C1" ,"D1" ,"D0" };//����ȫ˵�ٻ�
//	char arr3[4][3] = { 0 };//��¼˭˵���滰˭˵�˼ٻ�
//	char arr4[4][6] = { "false","false","false","false" };//tureΪ���֣�false��������
//	char arr5[4] = { 'A','B','C','D' };//��¼�ĸ��˵�����
//	int brr[4] = { 1,1,1,1 };//˵�滰�ļ�Ϊ1��˵�ٻ��ļ�Ϊ0
//	int i = 0;
//	for (i = 0; i < 4; i++)
//	{
//		int j = 0;
//		brr[i] = 0;//���������˵����
//		while (j < 4)//��¼˭˵���滰˭˵�˼ٻ�
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
//			int count = 0;//��¼ture�ĸ���
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
//						printf("����Ϊ:%c\n", arr5[j]);
//						return 0;
//					}
//				}
//				
//			}
//		}
//		
//		brr[i] = 1;//��ԭ�������
//		for (j = 0; j < 4; j++)
//		{
//			strcpy(arr4[j], "false");//��ԭarr4
//		}
//	}
//	return 0;
//}