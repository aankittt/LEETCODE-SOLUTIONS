class Solution {
    int f(int index,int height,vector<vector<int>>& books,int sw,int remw,int n,vector<vector<int>>& dp)
    {
        if(index>=n)
        return height;

        int bookw=books[index][0];
        int bookh=books[index][1];
        if(dp[index][remw]!=-1)
        return dp[index][remw];
        int take=INT_MAX;
        int not_take=INT_MAX;
        if(bookw<=remw)
        {
            take=f(index+1,max(height,bookh),books,sw,remw-bookw,n,dp);
        }
        
        not_take=height+f(index+1,bookh,books,sw,sw-bookw,n,dp);
        
        dp[index][remw]=min(take,not_take);
        return min(take,not_take);
        


    }
public:
    int minHeightShelves(vector<vector<int>>& books, int sw) {
        int n=books.size();
        vector<vector<int>>dp(n+1,vector<int>(sw+1,-1));
        int remw=sw;
        return f(0,0,books,sw,remw,n,dp);
    }
};