//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution{
    int f(int index,int capacity,int n,int price[],vector<vector<int>>&dp)
    {
        if(index==n)
        return -1e9;
        if(capacity==0)
        return 0;
        if(dp[index][capacity]!=-1)
        return dp[index][capacity];
        
        int not_take=0+f(index+1,capacity,n,price,dp);
        int take=-1e9;
        if(capacity>=index+1)
        take=price[index]+f(index,capacity-(index+1),n,price,dp);
        dp[index][capacity]=max(take,not_take);
        return max(take,not_take);
        
        
    }
  public:
    int cutRod(int price[], int n) {
        vector<vector<int>>dp(n,vector<int>(n+1,-1));
        return f(0,n,n,price,dp);
        
    }
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) 
            cin >> a[i];
            
        Solution ob;

        cout << ob.cutRod(a, n) << endl;
    }
    return 0;
}
// } Driver Code Ends