class Solution {
    int f(int i,int j,string &word1, string &word2,vector<vector<int>>&dp)
    {
        if(i==word1.length() || j==word2.length())
            return 0;

        if(word1[i]==word2[j])
        return 1+f(i+1,j+1,word1,word2,dp);
        if(dp[i][j]!=-1)
        return dp[i][j];
        int take=f(i+1,j,word1,word2,dp);
        int not_take=f(i,j+1,word1,word2,dp);

        dp[i][j]=max(take,not_take);
        return dp[i][j];
    }
public:
    int minDistance(string word1, string word2) {
        
        vector<vector<int>>dp(word1.size(),vector<int>(word2.size(),-1));

        int ans=f(0,0,word1,word2,dp);

        return word1.length()+word2.length()-(2*ans);
    }
};