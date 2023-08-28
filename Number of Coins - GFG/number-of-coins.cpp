//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
    int f(int index,int target,int n,int coins[],vector<vector<int>>&dp)
    {
        if(index==n)
        return 1e8;
        
        if(target==0)
        return 0;
        if(dp[index][target]!=-1)
        return dp[index][target];
        int not_take=0+f(index+1,target,n,coins,dp);
        int take=1e8;
        if(coins[index]<=target)
        {
            take=1+f(index,target-coins[index],n,coins,dp);
        }
        dp[index][target]=min(take,not_take);
        return min(take,not_take);
    }
	public:
	int minCoins(int coins[], int M, int V) 
	{ 
	    vector<vector<int>>dp(M+1,vector<int>(V+1,-1));
	    if(f(0,V,M,coins,dp)==1e8)
	    return -1;
	    return f(0,V,M,coins,dp);
	} 
	  
};

//{ Driver Code Starts.
int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
        int v, m;
        cin >> v >> m;

        int coins[m];
        for(int i = 0; i < m; i++)
        	cin >> coins[i];

      
	    Solution ob;
	    cout << ob.minCoins(coins, m, v) << "\n";
	     
    }
    return 0;
}

// } Driver Code Ends