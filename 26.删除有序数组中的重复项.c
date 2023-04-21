/*
 * @lc app=leetcode.cn id=26 lang=c
 *
 * [26] 删除有序数组中的重复项
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize){
    int left = 0;
    for (int right = 0; right < numsSize;right++)
    {
        if (nums[right] != nums[left])
        {
            nums[++left] = nums[right];
            /* code */
        }
        
    }
    return left + 1;
    
}
// @lc code=end

