#define _CRT_SECURE_NO_WARNINGS 1

//������ 17.04.��ʧ������
//����nums������0��n������������������ȱ��һ�������д�����ҳ��Ǹ�ȱʧ��������
//���а취��O(n)ʱ���������
//https://leetcode-cn.com/problems/missing-number-lcci/
int missingNumber(int* nums, int numsSize) {
	int sum = 0;
	int ret = 0;
	for (int i = 0; i < numsSize + 1; i++)
	{
		sum += i;
	}
	for (int i = 0; i < numsSize; i++)
	{
		ret += nums[i];
	}
	return sum - ret;
}