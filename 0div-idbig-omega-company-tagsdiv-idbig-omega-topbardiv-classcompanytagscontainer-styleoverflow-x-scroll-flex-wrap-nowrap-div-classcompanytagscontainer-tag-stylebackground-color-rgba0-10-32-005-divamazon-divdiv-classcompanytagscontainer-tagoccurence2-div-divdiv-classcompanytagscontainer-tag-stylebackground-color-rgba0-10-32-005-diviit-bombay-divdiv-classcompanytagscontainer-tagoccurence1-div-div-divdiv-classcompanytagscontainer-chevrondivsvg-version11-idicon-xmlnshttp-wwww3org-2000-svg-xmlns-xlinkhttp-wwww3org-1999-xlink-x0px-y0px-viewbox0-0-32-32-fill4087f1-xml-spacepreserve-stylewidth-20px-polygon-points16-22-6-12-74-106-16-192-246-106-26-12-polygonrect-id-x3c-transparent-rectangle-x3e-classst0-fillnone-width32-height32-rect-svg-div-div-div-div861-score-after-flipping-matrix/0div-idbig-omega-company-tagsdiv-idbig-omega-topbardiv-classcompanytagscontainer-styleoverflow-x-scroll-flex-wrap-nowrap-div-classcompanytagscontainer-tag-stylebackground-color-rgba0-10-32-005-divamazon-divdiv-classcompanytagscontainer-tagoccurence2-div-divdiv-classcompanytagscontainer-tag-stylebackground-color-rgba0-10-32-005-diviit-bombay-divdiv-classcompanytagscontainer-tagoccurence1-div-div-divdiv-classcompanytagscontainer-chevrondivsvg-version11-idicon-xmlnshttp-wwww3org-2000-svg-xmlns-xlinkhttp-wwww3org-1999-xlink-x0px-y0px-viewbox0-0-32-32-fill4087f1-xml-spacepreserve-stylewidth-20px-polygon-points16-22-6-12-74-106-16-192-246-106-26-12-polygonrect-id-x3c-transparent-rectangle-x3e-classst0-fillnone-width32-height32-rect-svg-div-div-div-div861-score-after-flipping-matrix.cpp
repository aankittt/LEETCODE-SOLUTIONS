class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int n=grid.size();
        int m=grid[0].size();

        for(int i=0;i<n;i++)
        {
            if(grid[i][0]==0)
            {
                for(int j=0;j<m;j++)
                grid[i][j]=!grid[i][j];
            }
        }

        for(int j=0;j<m;j++)
        {
            int count=0;
            for(int i=0;i<n;i++)
            {
                if(grid[i][j]==0)
                count++;
            }
            if(count>n/2)
            {
                for(int i=0;i<n;i++)
                grid[i][j]=!grid[i][j];
            }
            count=0;
        }
        int ans=0;
        for(int i=0;i<n;i++)
        {
            int sum=0;
            for(int j=0;j<m;j++)
            {   if(grid[i][j]==1)
                sum+=pow(2,m-j-1);
            }
            ans+=sum;
        }

        return ans;




        return 1;
    }
};