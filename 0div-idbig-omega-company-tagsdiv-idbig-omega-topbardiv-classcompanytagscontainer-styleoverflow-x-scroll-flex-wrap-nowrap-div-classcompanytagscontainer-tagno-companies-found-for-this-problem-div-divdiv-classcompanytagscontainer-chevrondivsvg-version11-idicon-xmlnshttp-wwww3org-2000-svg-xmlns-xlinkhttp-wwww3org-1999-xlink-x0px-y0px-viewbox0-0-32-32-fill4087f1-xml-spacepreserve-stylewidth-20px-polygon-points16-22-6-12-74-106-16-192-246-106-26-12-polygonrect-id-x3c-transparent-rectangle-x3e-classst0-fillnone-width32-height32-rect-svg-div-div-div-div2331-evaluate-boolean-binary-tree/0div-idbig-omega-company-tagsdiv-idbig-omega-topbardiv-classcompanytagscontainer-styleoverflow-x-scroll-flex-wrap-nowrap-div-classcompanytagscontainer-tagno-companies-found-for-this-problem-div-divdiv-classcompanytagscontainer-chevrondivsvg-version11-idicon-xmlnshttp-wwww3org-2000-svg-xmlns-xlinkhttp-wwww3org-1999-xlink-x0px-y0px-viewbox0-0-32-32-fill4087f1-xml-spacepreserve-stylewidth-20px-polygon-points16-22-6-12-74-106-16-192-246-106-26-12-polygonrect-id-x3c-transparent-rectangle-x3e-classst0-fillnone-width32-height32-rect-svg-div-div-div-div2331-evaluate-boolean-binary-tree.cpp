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
    bool dfs(TreeNode* root)
    {
        if(!root->left && !root->right)
            return root->val;
        bool left=dfs(root->left);
        bool right=dfs(root->right);
        
        if(root->val==2)
            return left || right;
        if(root->val==3)
        return left &&  right;
            
        return false;
    }
public:
    bool evaluateTree(TreeNode* root) {
        return dfs(root);
    }
};