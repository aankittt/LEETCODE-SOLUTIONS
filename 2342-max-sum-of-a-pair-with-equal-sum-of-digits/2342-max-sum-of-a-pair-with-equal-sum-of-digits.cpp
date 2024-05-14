class Solution {
    int sumofdigit(int n)
    {
        int sum=0;
        while(n)
        {
            sum+=n%10;
            n=n/10;
        }
        return sum;
    }
public:
    int maximumSum(vector<int>& nums) {
        unordered_map<int,vector<int>>mp;
        
        for(auto it:nums)
        {
            int z=sumofdigit(it);
            mp[z].push_back(it);
        }
        int ans=-1;
        for(auto it:mp){
            sort(it.second.begin(),it.second.end());
             if(it.second.size()>1)
             {
                 int a=it.second[it.second.size()-1]+it.second[it.second.size()-2];
                 ans=max(ans,a);
             }
        }
        
        return ans;
        
        
    }
};