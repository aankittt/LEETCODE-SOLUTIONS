class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        int open=0;
        int close=0;
        backtrack(ans,open,close,n,"");
        return ans;

    }
    void backtrack(vector<string>&ans,int open,int close,int n,string s)
    {

        if(open == n && close == n)
        {
            ans.push_back(s);
            return ;
        }
        if(open<n)
        {
            backtrack(ans,open+1,close,n,s+'(');
        }
        if(open>close)
        {
            backtrack(ans,open,close+1,n,s+')');
        }
    }
};