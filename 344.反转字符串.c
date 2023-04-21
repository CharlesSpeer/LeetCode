/*
 * @lc app=leetcode.cn id=344 lang=c
 *
 * [344] 反转字符串
 */

// @lc code=start


void reverseString(char* s, int sSize){
    int left = 0;
    int right = sSize - 1;
    int temp = 0;
    while (left <= right)
    {
        temp = s[left];
        s[left] = s[right];
        s[right] = temp;
        left++;
        right--;
    }
    
}
// @lc code=end

