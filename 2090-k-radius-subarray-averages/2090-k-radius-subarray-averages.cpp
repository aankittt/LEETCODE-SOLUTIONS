class Solution {
public:
    vector<int> getAverages(vector<int>& nums, int k) {
        int n=nums.size();
        vector<int>ans(nums.size(),-1);
        if(k>=nums.size())
        return ans;
        if(2*k+1>nums.size())
        return ans;
        long long sum=0;
        for(int i=0;i<=2*k;i++)
            sum+=nums[i];
        ans[k]=sum/(2*k+1);
        for(int i=k+1;i<n-k;i++)
        {
            sum=sum-nums[i-k-1];
            sum=sum+nums[i+k];
            ans[i]=int(sum/(2*k+1));
            
        }

        return ans;
    }
};