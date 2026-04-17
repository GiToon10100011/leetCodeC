/*
 * @lc app=leetcode id=1480 lang=cpp
 *
 * [1480] Running Sum of 1d Array
 */

// @lc code=start
class Solution
{
public:
    vector<int> runningSum(vector<int> &nums)
    {
        vector<int> resultArr(nums.size());
        for (int i = 0; i < nums.size(); i++)
        {
            //매 바깥순회마다 합계를 만들어 0으로 초기화시켜 안의 요소들끼리 더하게 만듦
            int currentSum = 0;
            for (int j = 0; j <= i; j++)
            {
                currentSum += nums[j];
            }
            resultArr[i] = currentSum;
        }
        return resultArr;
    }
};
// @lc code=end
