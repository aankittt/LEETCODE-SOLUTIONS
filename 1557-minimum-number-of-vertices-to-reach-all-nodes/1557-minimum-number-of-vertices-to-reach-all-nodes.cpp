class Solution {
public:
    vector<int> findSmallestSetOfVertices(int n, vector<vector<int>>& edges) {
        vector<int>ans;
        unordered_map<int,int>mp;
        for(auto it:edges)
        {
            mp[it[1]]++;
        }
        for(int i=0;i<n;i++)
        {
            if(mp.count(i))
            continue;
            else
            ans.push_back(i);
        }
        return ans;
    }
};