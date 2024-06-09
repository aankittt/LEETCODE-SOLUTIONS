class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int count=0;
        int sum=0;
        unordered_map<int,int>mp;

        for(int i=0;i<nums.size();i++)
        {
            sum=(sum+nums[i]%k +k)%k;
            if(sum==0)
            count++;

            if(mp.find(sum)!=mp.end())
            {
                count=count+mp[sum];
            }

            mp[sum]++;
        }

        return count;
    }
};