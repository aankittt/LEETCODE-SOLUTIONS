class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums.size();i++)
        mp[nums[i]]++;

        if(mp.size()==0)
        return 0;

        int maxi=1;
        for(int i=0;i<nums.size();i++)
        {
            if((mp.find(nums[i]-1)==mp.end()))
            {
                int count=1;
                int a=nums[i]+1;
                while(mp.find(a)!=mp.end())
                {
                    count++;
                    a++;
                }
                    maxi=max(count,maxi);
            }
        }

        return maxi;
    }
};