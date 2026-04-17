/*
 * @lc app=leetcode id=876 lang=cpp
 *
 * [876] Middle of the Linked List
 */

// @lc code=start
/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution
{
public:
    ListNode *middleNode(ListNode *head)
    {
        //원본 손실 방지를 위한 복사본 
        ListNode *temp = head;
        int totalLength = 0;
        for (int i = 0; temp != nullptr; i++)
        {
            temp = temp->next;
            totalLength++;
        }
        for (int i = 0; i < totalLength / 2; i++)
        {
            head = head->next;
        }
        return head;
    }
};
// @lc code=end
