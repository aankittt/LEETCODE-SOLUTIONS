class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
        unordered_map<int,int>mp;
        for(int i=1;i<nums.size();i++)
        {
            nums[i]+=nums[i-1];
        }
        for(int i=0;i<nums.size();i++)
        {
            nums[i]=nums[i]%k;
        }
        mp[0]=-1;
        for(int i=0;i<nums.size();i++)
        {
            if(mp.count(nums[i]))
            {
               if(i-mp[nums[i]]>1)
                    return 1;
            }
            else
                mp[nums[i]]=i;
        }

        return false;
    }
};