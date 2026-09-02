// Pushed: 2026-09-02 15:37:10 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 22.9 MB

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
class Solution {
public:
    bool isBalanced(TreeNode* root) {

        if(root == nullptr) {
            return true;
        }

        int diff = abs(height(root->left) - height(root->right)); 
        if(diff > 1) {
            return false; 
        }

        return isBalanced(root->right) && isBalanced(root->left);     
    }

    int height(TreeNode* root) {
        if(root == NULL) {
            return 0; 
        }

        int left = height(root->left); 
        int right = height(root->right); 

        return std::max(left, right) + 1; 
    }
};