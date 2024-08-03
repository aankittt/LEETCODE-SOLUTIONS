class Solution {
public:
    bool canBeEqual(vector<int>& target, vector<int>& arr) {
        unordered_map<int,int>mp;
        for(auto it:target)
            mp[it]++;
        
        for(auto it:arr)
        {
            if(mp[it]>0)
            {
             mp[it]--;   
            }
            else
                return false;
        }
        return true;
    }
};