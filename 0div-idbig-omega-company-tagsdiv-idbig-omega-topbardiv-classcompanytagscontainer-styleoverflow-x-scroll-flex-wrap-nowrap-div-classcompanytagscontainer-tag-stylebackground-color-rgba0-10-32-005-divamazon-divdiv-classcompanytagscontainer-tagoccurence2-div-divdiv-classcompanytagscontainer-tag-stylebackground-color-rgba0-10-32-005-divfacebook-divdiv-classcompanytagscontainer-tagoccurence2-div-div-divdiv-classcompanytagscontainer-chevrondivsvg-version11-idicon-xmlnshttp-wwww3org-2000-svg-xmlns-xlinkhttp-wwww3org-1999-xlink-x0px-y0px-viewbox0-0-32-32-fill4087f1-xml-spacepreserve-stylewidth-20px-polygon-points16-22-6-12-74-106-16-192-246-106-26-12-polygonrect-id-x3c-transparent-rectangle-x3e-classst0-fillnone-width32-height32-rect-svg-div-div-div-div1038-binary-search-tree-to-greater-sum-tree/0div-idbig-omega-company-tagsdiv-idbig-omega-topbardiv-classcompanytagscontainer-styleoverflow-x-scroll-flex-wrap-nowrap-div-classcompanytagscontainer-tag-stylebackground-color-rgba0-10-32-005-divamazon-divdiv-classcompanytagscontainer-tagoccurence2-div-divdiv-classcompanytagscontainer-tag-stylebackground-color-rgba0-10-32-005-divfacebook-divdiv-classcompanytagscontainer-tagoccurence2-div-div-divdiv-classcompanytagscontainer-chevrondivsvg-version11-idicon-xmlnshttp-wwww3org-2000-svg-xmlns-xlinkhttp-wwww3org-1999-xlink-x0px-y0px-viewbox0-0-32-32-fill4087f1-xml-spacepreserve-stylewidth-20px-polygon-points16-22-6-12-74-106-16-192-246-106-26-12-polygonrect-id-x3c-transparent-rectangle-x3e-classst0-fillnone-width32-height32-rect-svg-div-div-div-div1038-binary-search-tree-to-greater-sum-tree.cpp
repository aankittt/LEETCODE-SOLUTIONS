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
    void f(vector<int>&inorder,TreeNode* &root)
    {
        if(!root)
        return ;

        f(inorder,root->left);
        inorder.push_back(root->val);
        f(inorder,root->right);
    }

    void change(TreeNode* root,unordered_map<int,int>&mp)
    {
        if(!root)
        return ;

        root->val=mp[root->val];
        change(root->left,mp);
        change(root->right,mp);
    }
public:
    TreeNode* bstToGst(TreeNode* root) {
        vector<int>inorder;
        TreeNode* temp=root;
        f(inorder,root);
        unordered_map<int,int>mp;
        int n=inorder.size();
        for(int i=inorder.size()-2;i>=0;i--)
        {
            mp[inorder[i]]=inorder[i]+inorder[i+1];
            inorder[i]=inorder[i]+inorder[i+1];
        }
        mp[inorder[n-1]]=inorder[n-1];

        for(auto it:mp)
        cout<<it.first<<" "<<it.second<<endl;

        change(root,mp);


        return root;


        
    }
};