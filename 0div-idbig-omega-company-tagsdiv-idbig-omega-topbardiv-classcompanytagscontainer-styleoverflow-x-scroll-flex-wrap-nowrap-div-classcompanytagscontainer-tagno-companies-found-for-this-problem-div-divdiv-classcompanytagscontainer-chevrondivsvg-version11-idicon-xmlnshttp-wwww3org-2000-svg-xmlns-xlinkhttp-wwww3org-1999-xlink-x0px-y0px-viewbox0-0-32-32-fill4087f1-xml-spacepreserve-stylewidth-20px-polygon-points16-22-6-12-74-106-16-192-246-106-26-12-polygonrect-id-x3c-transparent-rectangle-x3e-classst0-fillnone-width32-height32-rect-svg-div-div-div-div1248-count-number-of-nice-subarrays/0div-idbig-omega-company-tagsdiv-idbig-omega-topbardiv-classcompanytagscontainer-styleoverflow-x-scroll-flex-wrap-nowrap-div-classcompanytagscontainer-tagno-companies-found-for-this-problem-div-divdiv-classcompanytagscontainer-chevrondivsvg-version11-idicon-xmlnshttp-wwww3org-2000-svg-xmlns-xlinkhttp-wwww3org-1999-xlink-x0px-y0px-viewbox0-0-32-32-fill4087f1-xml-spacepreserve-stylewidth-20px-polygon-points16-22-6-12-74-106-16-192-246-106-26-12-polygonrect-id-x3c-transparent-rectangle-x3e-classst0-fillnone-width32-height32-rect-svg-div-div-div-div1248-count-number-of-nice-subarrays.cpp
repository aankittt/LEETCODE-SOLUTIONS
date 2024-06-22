class Solution {
     int f(vector<int>& nums,int goal)
    {
        if(goal<0)
        return 0;
        int start=0;
        int end=0;

        int ans=0;
        int count=0;

        while(end<nums.size())
        {
            count+=nums[end];
            while(count>goal)
            {
                count-=nums[start];
                start++;
            }

            ans+=(end-start)+1;
            end++;
        }

        return ans;
    }
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
      for(int i=0;i<nums.size();i++)
      {
          if(nums[i]&1)
          nums[i]=1;
          else
          nums[i]=0;
      } 

      return f(nums,k)-f(nums,k-1);
    }
     
};