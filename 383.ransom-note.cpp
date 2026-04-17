/*
 * @lc app=leetcode id=383 lang=cpp
 *
 * [383] Ransom Note
 */

// @lc code=start
class Solution
{
public:
    bool canConstruct(string ransomNote, string magazine)
    {
        return ransomNote.find_first_of(magazine) != string::npos && ransomNote.find_first_not_of(magazine) == string::npos;
    }
};
// @lc code=end
