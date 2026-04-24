/*
 * @lc app=leetcode id=198 lang=cpp
 *
 * [198] House Robber
 */

// @lc code=start
class Solution
{
public:
    int rob(vector<int> &nums)
    {
        int total = 0;
        int altTotal = 0;
        for (int i = 0; i < nums.size(); i += 2)
        {
            total += nums[i];
        }
        for (int i = 1; i < nums.size(); i += 2)
        {
            altTotal += nums[i];
        }
        return total > altTotal ? total : altTotal;
    }
};
// @lc code=end
