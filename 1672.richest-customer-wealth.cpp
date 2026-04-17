/*
 * @lc app=leetcode id=1672 lang=cpp
 *
 * [1672] Richest Customer Wealth
 */

// @lc code=start
class Solution
{
public:
    int maximumWealth(vector<vector<int>> &accounts)
    {
        int result = 0;
        for (int i = 0; i < accounts.size(); i++)
        {
            int currentSum = 0;
            for (int j = 0; j < accounts[i].size(); j++)
            {
                currentSum += accounts[i][j];
                if (currentSum > result)
                    result = currentSum;
            }
        }
        return result;
    }
};
// @lc code=end
