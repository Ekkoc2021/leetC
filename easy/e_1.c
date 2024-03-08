/**
给定一个整数数组 nums 和一个整数目标值 target，请你在该数组中找出 和为目标值 target  的那 两个 整数，并返回它们的数组下标。

你可以假设每种输入只会对应一个答案。但是，数组中同一个元素在答案里不能重复出现。

你可以按任意顺序返回答案。
 */

int *twoSum(int *nums, int numsSize, int target, int *returnSize)
{
    int *re = malloc(sizeof(int) * 2);
    for (int num_index_1 = 0; num_index_1 < numsSize; num_index_1++)
    {
        for (int num_index_2 = num_index_1 + 1; num_index_2 < numsSize; num_index_2++)
        {
            if (nums[num_index_1] + nums[num_index_2] == target)
            {
                re[0] = num_index_1;
                re[1] = num_index_2;
                *returnSize = 2;
                return re;
            }
        }
    }
    *returnSize = 0;
    return re;
}