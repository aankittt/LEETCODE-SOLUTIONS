class Solution {
public:
    int maxProfitAssignment(vector<int>& difficulty, vector<int>& profit, vector<int>& worker) {
        vector<pair<int,int>>p(profit.size());
        
        for(int i=0;i<profit.size();i++)
        {
            p[i].first=profit[i];
            p[i].second=difficulty[i];
        }
        
       sort(p.rbegin(),p.rend());
        int ans=0;
        
        for(int i=0;i<p.size();i++)
            cout<<p[i].first<<" "<<p[i].second<<endl;
        for(int i=0;i<worker.size();i++)
        {
            for(int j=0;j<p.size();j++)
            {
                if(p[j].second<=worker[i])
                {
                    ans+=p[j].first;
                    break;
                }
            }
        }
        
        return ans;
        
        
        return 1;
    }
};