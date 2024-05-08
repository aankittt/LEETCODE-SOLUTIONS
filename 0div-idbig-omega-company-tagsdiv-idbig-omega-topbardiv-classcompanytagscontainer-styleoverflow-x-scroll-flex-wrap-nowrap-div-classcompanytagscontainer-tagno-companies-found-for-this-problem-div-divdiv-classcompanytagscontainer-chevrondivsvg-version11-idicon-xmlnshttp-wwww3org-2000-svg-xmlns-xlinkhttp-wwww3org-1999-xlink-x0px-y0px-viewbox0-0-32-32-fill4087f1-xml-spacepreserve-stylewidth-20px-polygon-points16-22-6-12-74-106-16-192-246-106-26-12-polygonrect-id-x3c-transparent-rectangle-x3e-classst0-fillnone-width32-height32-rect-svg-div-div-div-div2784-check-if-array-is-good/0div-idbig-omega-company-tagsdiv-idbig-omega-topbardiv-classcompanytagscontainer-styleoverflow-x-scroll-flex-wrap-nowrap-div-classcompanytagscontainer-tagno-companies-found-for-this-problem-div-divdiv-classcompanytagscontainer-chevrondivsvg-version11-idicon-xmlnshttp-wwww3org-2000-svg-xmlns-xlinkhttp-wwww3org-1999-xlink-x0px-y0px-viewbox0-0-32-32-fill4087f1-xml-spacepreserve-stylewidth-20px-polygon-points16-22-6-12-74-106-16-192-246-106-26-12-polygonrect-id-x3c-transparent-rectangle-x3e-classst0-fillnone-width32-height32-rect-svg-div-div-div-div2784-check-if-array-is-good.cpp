class Solution {
public:
    bool isGood(vector<int>& nums) {
        int n=nums.size();
        if(nums.size()==1)
            return false;
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
            mp[nums[i]]++;
        
        for(int i=1;i<n;i++)
        {
            if(i!=n-1 && mp[i]!=1)
                return false;
            else
            {
                if(mp[n-1]!=2)
                    return false;
            }
                
        }
        
        return true;
    }
};