class Solution {
public:
    int longestValidParentheses(string s) {
        int sum=0;
        int maxi=0;
        int len=0;
        for(auto it:s)
        {
            if(it=='(')
                sum++;
            else
                sum--;
            len++;
            
            if(sum<0){
                len=0;
                sum=0;   
            }
            if(sum==0)
                maxi=max(maxi,len);   
        }
         sum=0;
         len=0;
        for(int i=s.size()-1;i>=0;i--)
        {
            
            if(s[i]==')')
                sum++;
            else
                sum--;
            len++;
            
            if(sum<0){
                len=0;
                sum=0;   
            }
            if(sum==0)
                maxi=max(maxi,len);   
        }
        return maxi;
    }
};