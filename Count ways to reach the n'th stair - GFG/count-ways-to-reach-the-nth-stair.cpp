//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    int f(int n,vector<int>&dp)
    {
        if(n<=2)
        return n;
        if(dp[n]!=-1)
        return dp[n];
        int first=f(n-1,dp);
        int second=f(n-2,dp);
        dp[n]=(first+second)%1000000007;
        return dp[n];
        
        
    }
    public:
    //Function to count number of ways to reach the nth stair.
    int countWays(int n)
    {
        vector<int>dp(n+1,-1);
        return f(n,dp);
    }
};



//{ Driver Code Starts.
int main()
{
    //taking total testcases
    int t;
    cin >> t;
    while(t--)
    {
        //taking stair count
        int m;
        cin>>m;
        Solution ob;
        cout<<ob.countWays(m)<<endl; // Print the output from our pre computed array
    }
    return 0;
}

// } Driver Code Ends