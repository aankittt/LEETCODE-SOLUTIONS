class Solution {
    int f(int index, unordered_map<int,int>&mp,vector<int>&nums,int k,int& count)
    {
        if(index==nums.size())
        {
            return 1;
        }
        int take=0;
        if((mp[nums[index]-k]==0 )&& (mp[nums[index]+k]==0))
        {
            mp[nums[index]]++;
            take=f(index+1,mp,nums,k,count);
            mp[nums[index]]--;
        }
        
        int not_take=f(index+1,mp,nums,k,count);
        
        return take+not_take;
            
    }
public:
    int beautifulSubsets(vector<int>& nums, int k) {
        int count=0;
        
        unordered_map<int,int>mp;
        
        return f(0,mp,nums,k,count)-1;
    }
};