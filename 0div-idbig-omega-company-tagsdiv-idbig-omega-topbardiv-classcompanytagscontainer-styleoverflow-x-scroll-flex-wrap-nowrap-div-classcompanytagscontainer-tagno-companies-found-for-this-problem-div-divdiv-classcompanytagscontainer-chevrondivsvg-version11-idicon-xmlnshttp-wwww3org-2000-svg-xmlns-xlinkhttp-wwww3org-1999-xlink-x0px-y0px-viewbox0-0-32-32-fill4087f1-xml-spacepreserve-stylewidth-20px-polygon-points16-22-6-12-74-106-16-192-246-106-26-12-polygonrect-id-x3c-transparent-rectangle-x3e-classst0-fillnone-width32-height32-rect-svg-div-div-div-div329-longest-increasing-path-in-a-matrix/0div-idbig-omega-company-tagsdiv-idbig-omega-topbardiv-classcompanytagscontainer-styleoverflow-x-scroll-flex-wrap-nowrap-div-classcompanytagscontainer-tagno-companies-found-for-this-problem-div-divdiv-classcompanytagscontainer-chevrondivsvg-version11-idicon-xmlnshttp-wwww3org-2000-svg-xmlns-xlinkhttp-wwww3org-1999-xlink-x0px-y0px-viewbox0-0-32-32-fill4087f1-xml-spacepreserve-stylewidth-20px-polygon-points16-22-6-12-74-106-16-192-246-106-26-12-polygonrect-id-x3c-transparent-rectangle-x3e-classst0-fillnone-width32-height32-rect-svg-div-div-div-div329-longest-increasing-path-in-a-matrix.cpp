class Solution {
    int  dfs(int i,int j,vector<vector<int>>&matrix,vector<vector<int>>&dp)
    {
        if(i<0 || j<0 || i>=matrix.size()|| j>=matrix[0].size())
        return 0 ;

        if(dp[i][j]!=-1)
        return dp[i][j];
        int a=0;int b=0;int c=0; int d=0;
        if(i+1<matrix.size() && matrix[i+1][j]>matrix[i][j])
        a=1+dfs(i+1,j,matrix,dp);

        if(i-1>=0 && matrix[i-1][j]>matrix[i][j])
        b=1+dfs(i-1,j,matrix,dp);
        
        if(j+1<matrix[0].size() && matrix[i][j+1]>matrix[i][j])
        c=1+ dfs(i,j+1,matrix,dp);

        if(j-1>=0 && matrix[i][j-1]>matrix[i][j])
        d=1+dfs(i,j-1,matrix,dp);

        dp[i][j]=max({a,b,c,d});
        return max({a,b,c,d});

    }
    
public:
    int longestIncreasingPath(vector<vector<int>>& matrix) {
        int maxi=0;
        int m=matrix.size();int n=matrix[0].size();
        vector<vector<int>>dp(m+1,vector<int>(n+1,-1));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                maxi=max(maxi,1+dfs(i,j,matrix,dp));
            }
        }

        return maxi;
    }
};