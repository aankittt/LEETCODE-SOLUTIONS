//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
    int f(int index,int capacity,int val[],int wt[],vector<vector<int>>&dp)
    {
        if(index==0)
        {
            return (capacity/wt[0])*val[0];
        }
        if(capacity==0)
        return 0;
        
        if(dp[index][capacity]!=-1)
        return dp[index][capacity];
        int not_take=0+f(index-1,capacity,val,wt,dp);
        int take=INT_MIN;
        if(capacity>=wt[index])
        take=val[index]+f(index,capacity-wt[index],val,wt,dp);
        dp[index][capacity]=max(take,not_take);
        return max(take,not_take);
        
    }

public:
    int knapSack(int N, int W, int val[], int wt[])
    {
        vector<vector<int>>dp(N+1,vector<int>(W+1,-1));
        return f(N-1,W,val,wt,dp);
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        int N, W;
        cin>>N>>W;
        int val[N], wt[N];
        for(int i = 0;i < N;i++)
            cin>>val[i];
        for(int i = 0;i < N;i++)
            cin>>wt[i];
        
        Solution ob;
        cout<<ob.knapSack(N, W, val, wt)<<endl;
    }
    return 0;
}
// } Driver Code Ends