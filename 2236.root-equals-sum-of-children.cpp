/*
 * @lc app=leetcode id=2236 lang=cpp
 *
 * [2236] Root Equals Sum of Children
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

 // -> 는 포인터 변수에서 값을 직접 가지고 나오기 위해 사용한다. 
 //left, right또한 TreeNode의 타입이기 때문에 한번 더 거쳐서 진짜 본래 값을 갖고 나와야함.

class Solution {
public:
    bool checkTree(TreeNode* root) {
        return (root -> right -> val + root -> left -> val) == root -> val;
    }
};
// @lc code=end

