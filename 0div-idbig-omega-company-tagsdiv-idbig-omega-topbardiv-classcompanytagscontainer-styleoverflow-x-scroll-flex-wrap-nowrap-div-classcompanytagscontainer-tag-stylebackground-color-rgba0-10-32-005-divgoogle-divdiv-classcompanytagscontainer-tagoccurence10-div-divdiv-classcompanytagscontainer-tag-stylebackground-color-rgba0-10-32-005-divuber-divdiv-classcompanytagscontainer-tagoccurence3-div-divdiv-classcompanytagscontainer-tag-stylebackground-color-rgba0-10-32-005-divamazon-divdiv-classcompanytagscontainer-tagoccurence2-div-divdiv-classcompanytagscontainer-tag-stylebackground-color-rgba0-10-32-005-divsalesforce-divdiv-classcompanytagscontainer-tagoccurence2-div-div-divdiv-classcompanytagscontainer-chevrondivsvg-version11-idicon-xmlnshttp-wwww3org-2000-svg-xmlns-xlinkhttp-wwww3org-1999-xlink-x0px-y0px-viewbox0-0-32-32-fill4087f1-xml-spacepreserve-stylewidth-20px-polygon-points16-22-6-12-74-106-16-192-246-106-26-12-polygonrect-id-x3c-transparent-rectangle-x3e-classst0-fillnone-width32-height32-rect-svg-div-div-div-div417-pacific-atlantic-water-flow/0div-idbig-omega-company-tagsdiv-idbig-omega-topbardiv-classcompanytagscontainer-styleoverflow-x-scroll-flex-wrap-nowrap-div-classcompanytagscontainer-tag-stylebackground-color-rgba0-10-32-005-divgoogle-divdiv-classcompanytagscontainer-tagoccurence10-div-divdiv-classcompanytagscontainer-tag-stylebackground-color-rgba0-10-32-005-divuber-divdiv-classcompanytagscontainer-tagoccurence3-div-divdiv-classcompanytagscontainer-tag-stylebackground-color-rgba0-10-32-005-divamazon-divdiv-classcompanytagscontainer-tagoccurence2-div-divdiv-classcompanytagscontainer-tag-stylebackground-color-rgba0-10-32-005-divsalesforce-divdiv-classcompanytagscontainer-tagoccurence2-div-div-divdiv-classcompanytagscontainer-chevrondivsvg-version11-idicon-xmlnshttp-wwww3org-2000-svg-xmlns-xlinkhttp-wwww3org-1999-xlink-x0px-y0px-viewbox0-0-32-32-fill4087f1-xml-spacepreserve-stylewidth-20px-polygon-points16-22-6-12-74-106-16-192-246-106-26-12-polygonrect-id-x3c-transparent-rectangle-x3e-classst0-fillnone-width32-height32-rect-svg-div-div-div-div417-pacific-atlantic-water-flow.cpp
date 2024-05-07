class Solution {
    void dfs(vector<vector<int>>& heights,vector<vector<int>>& pacific,int i,int j)
    {
        if(i>=heights.size() || j>=heights[0].size() || i<0 || j<0 || pacific[i][j]==1)
        return;
            
        pacific[i][j]=1;
        
        if(i+1<heights.size() && heights[i+1][j]>=heights[i][j])
            dfs(heights,pacific,i+1,j);
        if(i-1>=0&& heights[i-1][j]>=heights[i][j])
            dfs(heights,pacific,i-1,j);
        if(j+1<heights[0].size() && heights[i][j+1]>=heights[i][j])
            dfs(heights,pacific,i,j+1);
        if(j-1>=0 && heights[i][j-1]>=heights[i][j])
            dfs(heights,pacific,i,j-1);
        
    }
public:
    vector<vector<int>> pacificAtlantic(vector<vector<int>>& heights) {
        int n=heights.size();
        int m=heights[0].size();
        
        vector<vector<int>>pacific(n,vector<int>(m,-1));
        vector<vector<int>>atlantic(n,vector<int>(m,-1));
        
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if((i==0 ||j==0) && pacific[i][j]==-1)
                dfs(heights,pacific,i,j);
                
                if((i==heights.size()-1|| j==heights[0].size()-1) && atlantic[i][j]==-1)
                dfs(heights,atlantic,i,j);
            }
        }
        vector<vector<int>>ans;
        
    for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(atlantic[i][j]==1 && pacific[i][j]==1)
                    ans.push_back({i,j});
            }
    }
        
        return ans;
    }
};