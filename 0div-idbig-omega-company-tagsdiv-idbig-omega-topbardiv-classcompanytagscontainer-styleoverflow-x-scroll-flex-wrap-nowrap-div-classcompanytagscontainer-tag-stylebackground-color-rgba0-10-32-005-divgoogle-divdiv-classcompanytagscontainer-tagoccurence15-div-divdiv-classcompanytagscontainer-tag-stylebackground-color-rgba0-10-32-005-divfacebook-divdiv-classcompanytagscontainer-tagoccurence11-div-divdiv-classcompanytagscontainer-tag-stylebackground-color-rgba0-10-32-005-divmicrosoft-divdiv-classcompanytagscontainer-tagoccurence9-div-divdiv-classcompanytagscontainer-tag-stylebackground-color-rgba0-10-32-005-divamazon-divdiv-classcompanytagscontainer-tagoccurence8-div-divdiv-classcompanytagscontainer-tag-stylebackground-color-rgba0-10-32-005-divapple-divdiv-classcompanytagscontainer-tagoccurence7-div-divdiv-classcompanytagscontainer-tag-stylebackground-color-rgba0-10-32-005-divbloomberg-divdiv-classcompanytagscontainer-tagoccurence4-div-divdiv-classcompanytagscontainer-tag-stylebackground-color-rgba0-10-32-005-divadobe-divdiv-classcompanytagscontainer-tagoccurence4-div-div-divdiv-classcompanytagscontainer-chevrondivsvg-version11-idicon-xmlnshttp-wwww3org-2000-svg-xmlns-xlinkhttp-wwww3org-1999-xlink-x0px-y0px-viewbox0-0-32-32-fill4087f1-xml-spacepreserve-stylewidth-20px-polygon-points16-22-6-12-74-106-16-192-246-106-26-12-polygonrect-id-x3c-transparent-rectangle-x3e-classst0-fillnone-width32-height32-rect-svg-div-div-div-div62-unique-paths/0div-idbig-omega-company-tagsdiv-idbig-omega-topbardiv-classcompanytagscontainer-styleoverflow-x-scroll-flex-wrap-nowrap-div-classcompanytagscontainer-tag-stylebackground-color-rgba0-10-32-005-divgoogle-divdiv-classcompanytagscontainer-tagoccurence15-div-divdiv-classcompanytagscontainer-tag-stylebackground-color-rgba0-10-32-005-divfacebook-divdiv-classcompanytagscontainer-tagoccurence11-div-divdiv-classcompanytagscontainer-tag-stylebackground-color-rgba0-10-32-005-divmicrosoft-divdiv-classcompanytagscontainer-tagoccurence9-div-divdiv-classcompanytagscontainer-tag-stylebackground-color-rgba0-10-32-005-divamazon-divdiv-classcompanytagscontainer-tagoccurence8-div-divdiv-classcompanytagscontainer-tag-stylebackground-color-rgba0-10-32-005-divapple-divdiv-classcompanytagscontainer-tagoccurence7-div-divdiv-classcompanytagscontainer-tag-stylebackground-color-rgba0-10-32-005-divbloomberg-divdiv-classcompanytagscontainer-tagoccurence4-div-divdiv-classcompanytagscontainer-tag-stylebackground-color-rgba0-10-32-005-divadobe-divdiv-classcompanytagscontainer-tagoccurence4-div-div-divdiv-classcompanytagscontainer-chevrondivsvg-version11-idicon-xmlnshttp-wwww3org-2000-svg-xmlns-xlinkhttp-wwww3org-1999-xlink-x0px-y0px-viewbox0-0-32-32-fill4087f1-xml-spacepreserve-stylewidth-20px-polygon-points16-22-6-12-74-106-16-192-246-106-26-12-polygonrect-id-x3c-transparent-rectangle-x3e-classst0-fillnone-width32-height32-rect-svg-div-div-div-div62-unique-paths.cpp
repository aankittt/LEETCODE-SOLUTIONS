class Solution {
    int f(int i,int j,int m ,int n,vector<vector<int>>&dp)
    {
        if(i==m || j==n)
        return 0;
        if(i==m-1 || j==n-1)
        return 1;
        if(dp[i][j]!=-1)
        return dp[i][j];
        int left=f(i+1,j,m,n,dp);
        int right=f(i,j+1,m,n,dp);
        dp[i][j]=left+right;
        return left+right;
    }
public:
    int uniquePaths(int m, int n) {
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
      return f(0,0,m,n ,dp)  ;
    }
};