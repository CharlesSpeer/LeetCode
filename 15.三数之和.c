/*
 * @lc app=leetcode.cn id=15 lang=c
 *
 * [15] 三数之和
 */

// @lc code=start
/**
 * Return an array of arrays of size *returnSize.
 * The sizes of the arrays are returned as *returnColumnSizes array.
 * Note: Both returned array and *columnSizes array must be malloced, assume caller calls free().
 */
int cmp(void *a, void *b) {
    return *(int*)a - *(int*)b;
}
int** threeSum(int* nums, int numsSize, int* returnSize, int** returnColumnSizes){
    int base = 100;
    int left;
    int right = numsSize - 1;
    *returnColumnSizes=(int*)malloc(sizeof(int)*base);
    *returnSize=0;
    int **res = (int**)malloc(sizeof(int*) * base);
    qsort(nums, numsSize, sizeof(int), cmp);
    for (int i = 0; i < numsSize; i++)
    {
        left = i + 1;
        while (left < right)
        {
            if (nums[i] + nums[left] + nums[right] > 0) {
                right--;
            } else if (nums[i] + nums[left] + nums[right] < 0) {
                left++;
            } else if (nums[i] + nums[left] + nums[right] == 0) {
                res[*returnSize][0] = nums[i];
                res[*returnSize][1] = nums[left];
                res[*returnSize][2] = nums[right];
                (*returnSize)++;
            } else {
                /* clean code */
            }
        }
    }
    return res;
}
// @lc code=end

