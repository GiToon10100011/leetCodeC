/*
 * @lc app=leetcode id=412 lang=cpp
 *
 * [412] Fizz Buzz
 */

// @lc code=start
class Solution
{
public:
    vector<string> fizzBuzz(int n)
    {
        vector<string> resultArr;
        for (int i = 1; i <= n; i++)
        {
            if (i % 3 == 0 && i % 5 == 0)
                resultArr.push_back("FizzBuzz");
            else if (i % 3 == 0)
                resultArr.push_back("Fizz");
            else if (i % 5 == 0)
                resultArr.push_back("Buzz");
            else
                resultArr.push_back(to_string(i));
        }
        return resultArr;
    }
};
// @lc code=end
