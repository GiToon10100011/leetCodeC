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
        // 길이는 26, 전부 0의 값으로 초기화 시켜줌
        vector<int> ransomNoteCount(26, 0);
        vector<int> magazineCount(26, 0);

        for (int i = 0; i < ransomNote.length(); i++)
        {
            ransomNoteCount[ransomNote[i] - 'a']++;
        }
        for (int i = 0; i < magazine.length(); i++)
        {
            magazineCount[magazine[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (ransomNoteCount[i] > magazineCount[i])
                return false;
        }
        return true;
    }
};
// @lc code=end
