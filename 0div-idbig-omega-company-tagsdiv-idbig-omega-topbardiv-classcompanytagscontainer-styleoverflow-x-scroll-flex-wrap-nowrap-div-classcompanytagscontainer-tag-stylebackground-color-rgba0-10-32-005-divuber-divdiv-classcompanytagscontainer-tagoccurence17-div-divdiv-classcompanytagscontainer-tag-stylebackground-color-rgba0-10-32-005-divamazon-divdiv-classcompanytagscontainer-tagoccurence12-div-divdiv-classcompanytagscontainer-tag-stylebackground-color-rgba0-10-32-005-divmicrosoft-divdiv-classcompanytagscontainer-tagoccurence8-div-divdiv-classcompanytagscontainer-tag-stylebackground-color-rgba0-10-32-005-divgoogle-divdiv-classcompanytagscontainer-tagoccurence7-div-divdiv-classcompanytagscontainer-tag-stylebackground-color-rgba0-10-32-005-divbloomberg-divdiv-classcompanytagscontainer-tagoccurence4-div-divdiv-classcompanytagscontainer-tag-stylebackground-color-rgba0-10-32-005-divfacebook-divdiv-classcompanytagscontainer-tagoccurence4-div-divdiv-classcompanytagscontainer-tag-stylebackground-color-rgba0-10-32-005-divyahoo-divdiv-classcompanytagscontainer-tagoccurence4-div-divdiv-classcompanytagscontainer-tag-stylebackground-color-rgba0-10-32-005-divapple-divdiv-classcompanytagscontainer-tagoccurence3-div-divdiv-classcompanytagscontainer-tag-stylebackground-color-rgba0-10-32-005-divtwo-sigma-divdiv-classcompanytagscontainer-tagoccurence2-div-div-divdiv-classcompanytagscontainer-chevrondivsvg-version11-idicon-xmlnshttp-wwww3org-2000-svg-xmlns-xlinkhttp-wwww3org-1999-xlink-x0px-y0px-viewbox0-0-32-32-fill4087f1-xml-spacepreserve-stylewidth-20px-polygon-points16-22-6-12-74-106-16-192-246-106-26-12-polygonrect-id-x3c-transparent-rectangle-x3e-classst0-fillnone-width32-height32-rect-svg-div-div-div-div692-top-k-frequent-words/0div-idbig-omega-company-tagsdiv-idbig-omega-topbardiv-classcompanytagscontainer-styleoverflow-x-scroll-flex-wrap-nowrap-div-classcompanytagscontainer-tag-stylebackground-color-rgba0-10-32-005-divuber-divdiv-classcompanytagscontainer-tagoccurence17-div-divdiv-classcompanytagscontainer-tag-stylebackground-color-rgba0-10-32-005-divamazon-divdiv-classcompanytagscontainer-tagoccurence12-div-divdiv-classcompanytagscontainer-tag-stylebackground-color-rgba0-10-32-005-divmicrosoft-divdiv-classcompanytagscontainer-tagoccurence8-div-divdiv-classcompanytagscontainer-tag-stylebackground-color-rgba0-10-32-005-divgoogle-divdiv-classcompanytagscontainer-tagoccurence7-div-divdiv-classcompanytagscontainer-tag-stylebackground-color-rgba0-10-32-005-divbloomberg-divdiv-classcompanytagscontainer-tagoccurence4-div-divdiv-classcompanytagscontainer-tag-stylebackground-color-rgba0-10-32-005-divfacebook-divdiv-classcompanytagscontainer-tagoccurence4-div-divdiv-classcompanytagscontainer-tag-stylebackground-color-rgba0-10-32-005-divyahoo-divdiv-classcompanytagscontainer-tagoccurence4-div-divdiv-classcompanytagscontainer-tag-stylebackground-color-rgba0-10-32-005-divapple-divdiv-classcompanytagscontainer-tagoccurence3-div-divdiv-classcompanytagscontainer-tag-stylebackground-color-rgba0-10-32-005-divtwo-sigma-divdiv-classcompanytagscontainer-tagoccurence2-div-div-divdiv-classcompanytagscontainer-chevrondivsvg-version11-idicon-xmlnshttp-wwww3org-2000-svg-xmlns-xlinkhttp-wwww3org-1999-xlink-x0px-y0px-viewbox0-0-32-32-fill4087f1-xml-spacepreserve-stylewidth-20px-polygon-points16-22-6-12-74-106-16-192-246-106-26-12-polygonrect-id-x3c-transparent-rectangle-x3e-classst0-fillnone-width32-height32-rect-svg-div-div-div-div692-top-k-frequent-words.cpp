#define p pair<int,string>
class Solution {
public:
    vector<string> topKFrequent(vector<string>& words, int k) {
        unordered_map<string,int>mp;
        for(auto it:words)
        mp[it]++;


        auto comp=[](p&a,p&b){
            if(a.first==b.first)
            return a.second<b.second;

            return a.first>b.first;

        };
        priority_queue<p,vector<p>, decltype(comp)> pq;

        for(auto it:mp)
        {
            pq.push({it.second,it.first});
            if(pq.size()>k)
            pq.pop();
        }

        vector<string>ans;
        while(pq.size())
        {
            auto it=pq.top();
            pq.pop();
            ans.push_back(it.second);
        }
        reverse(ans.begin(),ans.end());
        return ans;


    }
};