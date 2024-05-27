class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int id1=0;int id2=0;
        int maxi=INT_MIN;int mini=INT_MAX;
        int n=nums.size();
        
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]>maxi)
            {
                maxi=nums[i];
                id1=i;
            }
            if(nums[i]<mini)
            {
                mini=nums[i];
                id2=i;
            }
        }
        
        int left=max(id1+1,id2+1);
        int left1=min(id1+1,id2+1);
        int right=max(n-id1,n-id2);
        int right1=min(n-id1,n-id2);
        
        
        return min({left,right,left1+right1});
        
        
    }
};