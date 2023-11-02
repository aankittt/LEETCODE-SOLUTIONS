//0(n)
class Solution {
    int ans=0;
    pair<int,int>f(TreeNode* root)
    {
        if(!root)
        return {0,0};

        auto p1=f(root->left);
        auto p2=f(root->right);

        int sum=p1.first+p2.first+root->val;
        int count=p1.second+p2.second+1;

        int avg=sum/count;
        if(avg==root->val)
        ans++;

        return {sum,count};
    }
public:
    int averageOfSubtree(TreeNode* root) {

        f(root);
        return ans;
        
    }
};



//O(n^2)
class Solution1 {
    int ans=0;
    int total(TreeNode* root,int& cnt)
    {
        if(!root)
        return 0;
        cnt++;
        int left=total(root->left,cnt);
        int right=total(root->right,cnt);
        return left+right+root->val;

    }
public:
    int averageOfSubtree(TreeNode* root) {
        if(!root)
        return 0;
        int cnt=0;
        int a=total(root,cnt);
        int avg=a/cnt;
        if(avg==root->val)
        ans++;
        averageOfSubtree(root->left);
        averageOfSubtree(root->right);

        return ans;

    }
};