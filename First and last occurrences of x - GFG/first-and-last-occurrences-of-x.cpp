//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution
{
    public:
    vector<int> find(int arr[], int n , int x )
    {
        int left=0;
        int right=n-1;
        int first=-1;
        int last=-1;
        vector<int>ans;
        
        while(left <=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==x)
            {
                first=mid;
                right=mid-1;
            }
            else if(arr[mid]<x)
            left=mid+1;
            else
            right=mid-1;
        }
         left=0;
         right=n-1;
          while(left <=right)
        {
            int mid=(left+right)/2;
            if(arr[mid]==x)
            {
                last=mid;
                left=mid+1;
            }
            else if(arr[mid]<x)
            left=mid+1;
            else
            right=mid-1;
        }
        ans.push_back(first);
        ans.push_back(last);
        
        return ans;
        
    }
};

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        Solution ob;
        ans=ob.find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends