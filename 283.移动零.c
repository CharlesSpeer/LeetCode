/*
 * @lc app=leetcode.cn id=283 lang=c
 *
 * [283] 移动零
 */

// @lc code=start

int removeElement(int* nums, int numsSize, int val){
    int slow = 0;
    for (int fast = 0; fast < numsSize; fast++)
    {
        if (nums[fast] != val)
        {
            nums[slow++] = nums[fast];
        }
        
    }
    return slow;
}

void moveZeroes(int* nums, int numsSize){
    /* 删除0 */
    int dex = removeElement(nums, numsSize, 0);
    for (int i = dex; i < numsSize; i++)
    {
        /* code */
        nums[i] = 0;
    }
    
}
// @lc code=end

