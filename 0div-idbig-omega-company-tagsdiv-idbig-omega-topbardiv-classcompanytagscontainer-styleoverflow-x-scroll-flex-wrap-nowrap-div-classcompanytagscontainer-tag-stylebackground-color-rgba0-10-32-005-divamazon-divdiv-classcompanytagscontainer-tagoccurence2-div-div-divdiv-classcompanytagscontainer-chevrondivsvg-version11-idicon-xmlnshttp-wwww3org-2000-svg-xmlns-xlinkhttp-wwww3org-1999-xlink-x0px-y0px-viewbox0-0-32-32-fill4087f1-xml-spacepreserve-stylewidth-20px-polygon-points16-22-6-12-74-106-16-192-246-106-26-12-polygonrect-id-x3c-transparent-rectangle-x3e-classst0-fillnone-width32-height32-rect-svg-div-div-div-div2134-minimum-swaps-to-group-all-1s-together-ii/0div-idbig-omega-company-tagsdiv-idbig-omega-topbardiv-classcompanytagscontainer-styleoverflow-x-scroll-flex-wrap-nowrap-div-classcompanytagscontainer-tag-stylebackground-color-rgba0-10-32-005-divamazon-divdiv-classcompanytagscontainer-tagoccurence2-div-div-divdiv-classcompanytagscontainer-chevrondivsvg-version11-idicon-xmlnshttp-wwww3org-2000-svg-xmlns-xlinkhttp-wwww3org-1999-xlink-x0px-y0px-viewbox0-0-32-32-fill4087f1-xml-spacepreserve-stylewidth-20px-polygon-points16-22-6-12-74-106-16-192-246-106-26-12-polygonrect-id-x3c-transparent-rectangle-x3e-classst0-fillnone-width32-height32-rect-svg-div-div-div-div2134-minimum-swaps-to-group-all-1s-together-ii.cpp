class Solution {
public:
    int minSwaps(vector<int>& nums) {
        
        vector<int>ankit(nums.size()*2);
        for(int i=0;i<ankit.size();i++)
        {
            ankit[i]=nums[i%nums.size()];
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
        
        while(j<ankit.size())
        {
            ans=min(ans,count1-count);
            
            if(ankit[i]==1)
                count--;
            i++;
            j++;
            if( j<ankit.size()&& ankit[j]==1)
                count++;
        }
        return ans;
        
    }
};