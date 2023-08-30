//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends

class Solution
{
    public:
    //Function to find the maximum number of meetings that can
    //be performed in a meeting room.
    static bool cmp(pair<int,int>a,pair<int,int>b){
        if(a.second==b.second)
        return a.first>b.first;
    return a.second<b.second;
    }
    
    int maxMeetings(int start[], int end[], int n)
    {
        // Your code here
        vector<pair<int,int>>v(n);
        for(int i=0;i<n;i++){
            v[i].first=start[i];
            v[i].second=end[i];
        }
        
       sort(v.begin(),v.end(),cmp);
       
        int k = 1;
        int last = v[0].second;
        for(int i=1;i<n;++i){
        if(v[i].first>last){
            ++k;
            last=v[i].second;
        }
    }

        return k;
    }
};
  


//{ Driver Code Starts.
int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        Solution ob;
        int ans = ob.maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
}
// } Driver Code Ends