class Solution {
    vector<int>ans;
    void f(int start,int prev,unordered_map<int,vector<int>>& adj)
    {
        ans.push_back(start);
        for(auto it:adj[start])
        {
            if(it!=prev)
            f(it,start,adj);
        }
    }
public:
    vector<int> restoreArray(vector<vector<int>>& adjacentPairs) {
      unordered_map<int,vector<int>>adj;

      for(auto it:adjacentPairs)
    {
        int a=it[0];
        int b=it[1];

        adj[a].push_back(b);
        adj[b].push_back(a);
    }  
    int start=-1;
    for(auto it :adj)
    {
        if(it.second.size()==1){
        start=it.first;
        break;
        }
    }

    f(start,-1e9,adj);
    return ans;

    }
};