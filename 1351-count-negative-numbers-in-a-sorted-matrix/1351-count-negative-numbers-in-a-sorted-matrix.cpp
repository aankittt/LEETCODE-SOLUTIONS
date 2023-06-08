class Solution {
public:
    int countNegatives(vector<vector<int>>& grid) {
        int row=0;
        int col=grid[0].size()-1;
        int count=0;

        while(row< grid.size() && col>=0)
        {
            if(grid[row][col]<0)
            {
                count+=grid.size()-row;
                col--;
            }
            else
            {
                row++;
            }
        }
        return count;
    }
};