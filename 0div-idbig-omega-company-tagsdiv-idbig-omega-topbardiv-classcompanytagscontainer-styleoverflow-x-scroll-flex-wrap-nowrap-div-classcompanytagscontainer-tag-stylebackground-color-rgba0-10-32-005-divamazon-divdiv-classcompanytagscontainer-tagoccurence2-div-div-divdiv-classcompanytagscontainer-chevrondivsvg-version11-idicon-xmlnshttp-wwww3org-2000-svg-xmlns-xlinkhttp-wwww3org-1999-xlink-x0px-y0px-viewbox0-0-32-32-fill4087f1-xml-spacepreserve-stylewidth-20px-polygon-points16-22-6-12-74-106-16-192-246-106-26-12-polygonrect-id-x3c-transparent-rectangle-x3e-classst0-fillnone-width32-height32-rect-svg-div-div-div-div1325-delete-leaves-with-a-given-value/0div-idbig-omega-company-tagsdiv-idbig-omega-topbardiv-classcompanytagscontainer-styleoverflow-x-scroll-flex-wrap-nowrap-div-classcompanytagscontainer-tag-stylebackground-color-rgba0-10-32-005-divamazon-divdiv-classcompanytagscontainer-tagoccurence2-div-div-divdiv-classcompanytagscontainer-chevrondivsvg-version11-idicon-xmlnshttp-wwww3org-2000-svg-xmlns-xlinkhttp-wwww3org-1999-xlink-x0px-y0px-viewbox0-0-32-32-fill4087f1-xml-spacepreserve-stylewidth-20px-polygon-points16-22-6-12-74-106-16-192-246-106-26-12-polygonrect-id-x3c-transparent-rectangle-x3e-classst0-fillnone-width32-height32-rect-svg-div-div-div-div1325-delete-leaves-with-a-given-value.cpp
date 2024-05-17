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
    TreeNode* f(TreeNode* root,int target){
    if(!root)
            return nullptr;
         root->left   = removeLeafNodes(root->left,target);
         root->right =removeLeafNodes(root->right,target);
        
        if(!root->left && !root->right && root->val==target)
            return nullptr;
        
        return root;
        
    }
public:
    TreeNode* removeLeafNodes(TreeNode* root, int target) {
        return f(root,target);
    }
};