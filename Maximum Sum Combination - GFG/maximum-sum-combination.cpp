//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution {
  public:
    vector<int> maxCombinations(int N, int k, vector<int> &a, vector<int> &b) {
    priority_queue<pair<int,pair<int,int>>> pq;
    set<pair<int,int>> st; 
    vector<int> ans;
    
    sort(a.begin(), a.end(), greater<int>());
    sort(b.begin(), b.end(), greater<int>());
    pq.push({a[0]+b[0],{0,0}});
    st.insert({0,0});
    
    for(int i=0; i<k; i++){
        auto curPair=pq.top(); pq.pop();
        int curSum=curPair.first;
        int idx1=curPair.second.first;
        int idx2=curPair.second.second;
        
        ans.push_back(curSum);
        
        if(idx1+1<a.size() && st.find({idx1+1,idx2})==st.end()){
            pq.push({a[idx1+1]+b[idx2],{idx1+1,idx2}});
            st.insert({idx1+1,idx2});
        }
        
        if(idx2+1<a.size() && st.find({idx1,idx2+1})==st.end()){
            pq.push({a[idx1]+b[idx2+1],{idx1,idx2+1}});
            st.insert({idx1,idx2+1});
        }
    }
    return ans;
}
};

//{ Driver Code Starts.

int main() {
    int t;
    cin >> t;
    while (t--) {
        int N, K;
        cin >> N >> K;

        vector<int> A(N), B(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        for (int i = 0; i < N; i++) {
            cin >> B[i];
        }
        Solution obj;
        vector<int> ans = obj.maxCombinations(N, K, A, B);
        for (auto &it : ans) cout << it << ' ';
        cout << endl;
    }
    return 0;
}
// } Driver Code Ends