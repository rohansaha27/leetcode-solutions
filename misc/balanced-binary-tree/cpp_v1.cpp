// Pushed: 2026-09-07 09:39:27 UTC
// Difficulty: Unknown
// Runtime: 4 ms
// Memory: 23.1 MB

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

        return isBalanced(root->left) && isBalanced(root->right); 
    }

    int height(TreeNode* root) {
        if(root == nullptr) {
            return 0;
        }

        int left = height(root->left); 
        int right = height(root->right);

        return 1 + max(left, right);
    }
};