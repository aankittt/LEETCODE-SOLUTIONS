//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution {
    int f(int ind,int target,vector<int>&arr,vector<vector<int>>&dp)
{

  if(ind == 0){
     if(target==0 && arr[0]==0)
        return 2;
    if(target==0 || target == arr[0])
        return 1;
    return 0;
    }

    if(dp[ind][target]!=-1)
        return dp[ind][target];
        
    int notTaken = f(ind-1,target,arr,dp);
    
    int taken = 0;
    if(arr[ind]<=target)
        taken = f(ind-1,target-arr[ind],arr,dp);
        
    return dp[ind][target]= (notTaken + taken)%1000000007;

}

    
  public:
    int countPartitions(int n, int d, vector<int> &arr) {
    int totsum=0;
    for(int i=0;i<arr.size();i++)
    totsum=totsum+arr[i];
    vector<vector<int>>dp(arr.size(),vector<int>(totsum+1,-1));
    if((totsum-d)/2<0 || (totsum-d)&1)
    return 0;
    else
    return f(arr.size()-1,(totsum-d)/2,arr,dp);
}
};

//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n, d;
        cin >> n >> d;
        vector<int> arr;

        for (int i = 0; i < n; ++i) {
            int x;
            cin >> x;
            arr.push_back(x);
        }

        Solution obj;
        cout << obj.countPartitions(n, d, arr) << "\n";
    }
    return 0;
}
// } Driver Code Ends