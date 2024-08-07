class Solution {
    int f(int start,vector<int>&color,vector<vector<int>>& graph)
    {
        queue<int>q;
        q.push(start);
        color[start]=1;
        
        while(!q.empty())
        {
            auto node=q.front();
            q.pop();
            
            for(auto it:graph[node])
            {
                if(color[it]==-1)
                {
                    color[it]=!color[node];
                    q.push(it);
                }
                else if(color[it]==color[node])
                    return false;
            }
        }
        return 1;
    }
public:
    bool isBipartite(vector<vector<int>>& graph) {
        int n=graph.size();
        
        vector<int>color(n,-1);
        
        for(int i=0;i<n;i++)
        {
            if(color[i]==-1)
            {
                if(f(i,color,graph)==false)
                    return false;
            }
        }
        return 1;
    }
};