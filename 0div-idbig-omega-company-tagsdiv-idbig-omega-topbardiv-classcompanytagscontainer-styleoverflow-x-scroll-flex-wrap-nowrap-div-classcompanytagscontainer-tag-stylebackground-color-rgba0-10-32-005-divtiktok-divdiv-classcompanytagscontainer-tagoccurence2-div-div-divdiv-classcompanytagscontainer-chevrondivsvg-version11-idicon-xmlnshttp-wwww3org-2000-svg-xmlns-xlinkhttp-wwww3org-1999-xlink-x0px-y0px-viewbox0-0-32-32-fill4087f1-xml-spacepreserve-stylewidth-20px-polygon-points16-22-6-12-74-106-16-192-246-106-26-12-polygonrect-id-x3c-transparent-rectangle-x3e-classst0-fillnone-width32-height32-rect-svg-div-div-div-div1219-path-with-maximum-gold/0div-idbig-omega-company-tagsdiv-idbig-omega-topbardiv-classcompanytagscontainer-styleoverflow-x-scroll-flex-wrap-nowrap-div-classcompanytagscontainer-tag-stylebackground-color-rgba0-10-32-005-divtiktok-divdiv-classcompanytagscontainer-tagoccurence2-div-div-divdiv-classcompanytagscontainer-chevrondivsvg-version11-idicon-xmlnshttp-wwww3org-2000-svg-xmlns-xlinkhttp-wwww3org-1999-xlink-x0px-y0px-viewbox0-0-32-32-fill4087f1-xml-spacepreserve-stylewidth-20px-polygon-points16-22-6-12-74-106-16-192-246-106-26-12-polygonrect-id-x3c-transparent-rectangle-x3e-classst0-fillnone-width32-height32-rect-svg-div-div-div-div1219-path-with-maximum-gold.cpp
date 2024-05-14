class Solution {
    int  dfs(int i ,int j,vector<vector<int>>&  grid,vector<vector<int>>& vis)
    {
        if(i<0 || j<0 || i>=grid.size() || j>=grid[0].size() || vis[i][j]!=-1||grid[i][j]==0)
        return 0;
        vis[i][j]=1;
        int a=grid[i][j]+dfs(i+1,j,grid,vis);
        int b=grid[i][j]+dfs(i,j+1,grid,vis);
        int c=grid[i][j]+dfs(i-1,j,grid,vis);
        int d=grid[i][j]+dfs(i,j-1,grid,vis);

        vis[i][j]=-1;

        return max({a,b,c,d});
    }
public:
    int getMaximumGold(vector<vector<int>>& grid) {
        int n=grid.size();int m=grid[0].size();
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                vector<vector<int>>vis(n,vector<int>(m,-1));
                maxi=max(maxi,dfs(i,j,grid,vis));
            }
        }

        return maxi;
    }
};