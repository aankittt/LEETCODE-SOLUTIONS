class Solution {
public:
    int maxPointsInsideSquare(vector<vector<int>>& points, string s) {
        vector<int>v;
        for(int i=0;i<points.size();i++)
        {
            int z=max(abs(points[i][0]),abs(points[i][1]));
            v.push_back(z);
        }
        int discard=INT_MAX;
        
        unordered_map<char,int>mp;
        
        for(int i=0;i<points.size();i++)
        {
            if(mp.find(s[i])!=mp.end())
            {
                int purana=mp[s[i]];
                if(purana>v[i])
                {
                    mp[s[i]]=v[i];
                    discard=min(discard,purana);
                }
                else
                {
                    discard=min(discard,v[i]);
                }
                    
            }
            else
            {
                mp[s[i]]=v[i];
            }
        }
        
        int count=0;
        for(int i=0;i<points.size();i++)
            if(v[i]<discard)
                count++;
        
        return count;
            
    }
};