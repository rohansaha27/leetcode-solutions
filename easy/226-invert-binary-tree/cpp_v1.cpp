// Pushed: 2026-09-02 05:57:33 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 12.5 MB

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
    TreeNode* invertTree(TreeNode* root) {
        if(root == nullptr) {
            return nullptr; 
        }

        TreeNode* temp = root->left; 
        root->left = root->right; 
        root->right = temp; 

        invertTree(root->left);
        invertTree(root->right);
        
        return root; 
    }
};