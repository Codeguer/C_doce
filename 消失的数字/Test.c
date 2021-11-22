#define _CRT_SECURE_NO_WARNINGS 1

//面试题 17.04.消失的数字
//数组nums包含从0到n的所有整数，但其中缺了一个。请编写代码找出那个缺失的整数。
//你有办法在O(n)时间内完成吗？
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