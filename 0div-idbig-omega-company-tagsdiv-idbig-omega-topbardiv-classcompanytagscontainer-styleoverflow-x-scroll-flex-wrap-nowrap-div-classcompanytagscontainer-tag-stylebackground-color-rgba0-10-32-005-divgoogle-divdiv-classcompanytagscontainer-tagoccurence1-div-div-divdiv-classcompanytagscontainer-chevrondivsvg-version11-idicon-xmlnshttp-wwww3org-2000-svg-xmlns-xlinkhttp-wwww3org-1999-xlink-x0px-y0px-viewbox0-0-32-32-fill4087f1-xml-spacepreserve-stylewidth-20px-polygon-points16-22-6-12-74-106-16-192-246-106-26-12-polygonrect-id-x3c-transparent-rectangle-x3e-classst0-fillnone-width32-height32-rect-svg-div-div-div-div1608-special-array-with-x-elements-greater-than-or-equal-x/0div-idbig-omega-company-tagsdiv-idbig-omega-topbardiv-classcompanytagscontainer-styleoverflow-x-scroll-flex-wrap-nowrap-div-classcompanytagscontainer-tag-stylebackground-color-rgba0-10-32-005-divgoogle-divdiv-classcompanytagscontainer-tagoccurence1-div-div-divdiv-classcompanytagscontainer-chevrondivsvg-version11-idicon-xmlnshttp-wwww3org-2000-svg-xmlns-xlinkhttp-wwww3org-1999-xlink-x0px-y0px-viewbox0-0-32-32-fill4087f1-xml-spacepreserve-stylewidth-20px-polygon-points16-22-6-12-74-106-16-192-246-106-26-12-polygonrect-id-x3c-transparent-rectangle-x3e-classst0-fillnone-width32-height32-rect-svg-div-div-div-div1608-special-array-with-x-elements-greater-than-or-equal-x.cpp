class Solution {
    int f(vector<int>&nums,int mid)
    {
        int count=0;
        for(auto it:nums)
            if(it>=mid)
                count++;
        
        return count;
    }
public:
    int specialArray(vector<int>& nums) {
        int low=0;
        int high=nums.size();
        
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            int count=f(nums,mid);
            
            if(count==mid)
                return mid;
            else if(count<mid)
            {
                    high=mid-1;
            }
            else
            {
                low=mid+1;
            }
        }
        return -1;
    }
};