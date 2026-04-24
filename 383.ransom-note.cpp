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

/*

class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        if (ransomNote.length() > magazine.length()) {
            return false;
        }

        고정배열을 통한 메모리 효율성
        int counts[26] = {0};

        for (char c : magazine) {
            counts[c - 'a']++;
        }

        필요한 글자(ransomNote)를 하나씩 빼며 검사
        for (char c : ransomNote) {
            빼기 전이나 뺀 후에 개수가 부족한지 즉시 확인
            if (--counts[c - 'a'] < 0) {
                return false;
            }
        }

        return true;
    }
};

*/