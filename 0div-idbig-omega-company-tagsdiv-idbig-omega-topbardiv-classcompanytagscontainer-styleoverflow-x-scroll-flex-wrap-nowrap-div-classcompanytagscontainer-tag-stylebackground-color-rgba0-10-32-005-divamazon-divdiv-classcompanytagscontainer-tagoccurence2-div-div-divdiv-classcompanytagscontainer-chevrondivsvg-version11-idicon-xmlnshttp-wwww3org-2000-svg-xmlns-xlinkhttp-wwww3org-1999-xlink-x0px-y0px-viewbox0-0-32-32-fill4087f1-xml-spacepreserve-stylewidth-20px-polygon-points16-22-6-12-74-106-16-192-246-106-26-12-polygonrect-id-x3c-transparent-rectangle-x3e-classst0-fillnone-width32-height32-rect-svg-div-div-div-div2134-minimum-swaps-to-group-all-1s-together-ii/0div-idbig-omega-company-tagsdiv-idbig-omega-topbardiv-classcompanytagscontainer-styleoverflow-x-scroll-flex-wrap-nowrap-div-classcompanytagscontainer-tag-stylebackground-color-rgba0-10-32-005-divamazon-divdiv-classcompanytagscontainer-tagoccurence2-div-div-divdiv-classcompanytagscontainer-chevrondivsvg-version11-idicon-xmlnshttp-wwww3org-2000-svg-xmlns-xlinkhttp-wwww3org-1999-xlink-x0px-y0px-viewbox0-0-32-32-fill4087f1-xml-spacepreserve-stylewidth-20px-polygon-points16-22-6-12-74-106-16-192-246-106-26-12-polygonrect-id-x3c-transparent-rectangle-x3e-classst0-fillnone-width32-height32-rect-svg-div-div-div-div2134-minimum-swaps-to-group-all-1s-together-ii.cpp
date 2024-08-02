class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        vector<int>chammo(nums.size()*2);
        for(int i=0;i<chammo.size();i++)
        {
            chammo[i]=nums[i%nums.size()];
        }
        int count1=0;
        for(auto it:nums)
            if(it==1)
                count1++;
        if(count1==0)
            return 0;
        int count=0;
        for(int i=0;i<count1;i++)
        {
            if(nums[i]==1)
                count++;
        }
        
        int ans=INT_MAX;
        int i=0;
        int j=count1-1;
        
        while(j<chammo.size())
        {
            ans=min(ans,count1-count);
            
            if(chammo[i]==1)
                count--;
            i++;
            j++;
            if( j<chammo.size()&& chammo[j]==1)
                count++;
        }
        return ans;
        
    }
};