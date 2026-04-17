/*
 * @lc app=leetcode id=1342 lang=cpp
 *
 * [1342] Number of Steps to Reduce a Number to Zero
 */

// @lc code=start
class Solution
{
public:
    int numberOfSteps(int num)
    {
        int result = 0;
        for (int i = 0; num != 0; i++)
        {
            if (num % 2 == 0)
            {
                num /= 2;
                result++;
            }
            else
            {
                num -= 1;
                result++;
            }
        }
        return result;
    }
};
// @lc code=end
