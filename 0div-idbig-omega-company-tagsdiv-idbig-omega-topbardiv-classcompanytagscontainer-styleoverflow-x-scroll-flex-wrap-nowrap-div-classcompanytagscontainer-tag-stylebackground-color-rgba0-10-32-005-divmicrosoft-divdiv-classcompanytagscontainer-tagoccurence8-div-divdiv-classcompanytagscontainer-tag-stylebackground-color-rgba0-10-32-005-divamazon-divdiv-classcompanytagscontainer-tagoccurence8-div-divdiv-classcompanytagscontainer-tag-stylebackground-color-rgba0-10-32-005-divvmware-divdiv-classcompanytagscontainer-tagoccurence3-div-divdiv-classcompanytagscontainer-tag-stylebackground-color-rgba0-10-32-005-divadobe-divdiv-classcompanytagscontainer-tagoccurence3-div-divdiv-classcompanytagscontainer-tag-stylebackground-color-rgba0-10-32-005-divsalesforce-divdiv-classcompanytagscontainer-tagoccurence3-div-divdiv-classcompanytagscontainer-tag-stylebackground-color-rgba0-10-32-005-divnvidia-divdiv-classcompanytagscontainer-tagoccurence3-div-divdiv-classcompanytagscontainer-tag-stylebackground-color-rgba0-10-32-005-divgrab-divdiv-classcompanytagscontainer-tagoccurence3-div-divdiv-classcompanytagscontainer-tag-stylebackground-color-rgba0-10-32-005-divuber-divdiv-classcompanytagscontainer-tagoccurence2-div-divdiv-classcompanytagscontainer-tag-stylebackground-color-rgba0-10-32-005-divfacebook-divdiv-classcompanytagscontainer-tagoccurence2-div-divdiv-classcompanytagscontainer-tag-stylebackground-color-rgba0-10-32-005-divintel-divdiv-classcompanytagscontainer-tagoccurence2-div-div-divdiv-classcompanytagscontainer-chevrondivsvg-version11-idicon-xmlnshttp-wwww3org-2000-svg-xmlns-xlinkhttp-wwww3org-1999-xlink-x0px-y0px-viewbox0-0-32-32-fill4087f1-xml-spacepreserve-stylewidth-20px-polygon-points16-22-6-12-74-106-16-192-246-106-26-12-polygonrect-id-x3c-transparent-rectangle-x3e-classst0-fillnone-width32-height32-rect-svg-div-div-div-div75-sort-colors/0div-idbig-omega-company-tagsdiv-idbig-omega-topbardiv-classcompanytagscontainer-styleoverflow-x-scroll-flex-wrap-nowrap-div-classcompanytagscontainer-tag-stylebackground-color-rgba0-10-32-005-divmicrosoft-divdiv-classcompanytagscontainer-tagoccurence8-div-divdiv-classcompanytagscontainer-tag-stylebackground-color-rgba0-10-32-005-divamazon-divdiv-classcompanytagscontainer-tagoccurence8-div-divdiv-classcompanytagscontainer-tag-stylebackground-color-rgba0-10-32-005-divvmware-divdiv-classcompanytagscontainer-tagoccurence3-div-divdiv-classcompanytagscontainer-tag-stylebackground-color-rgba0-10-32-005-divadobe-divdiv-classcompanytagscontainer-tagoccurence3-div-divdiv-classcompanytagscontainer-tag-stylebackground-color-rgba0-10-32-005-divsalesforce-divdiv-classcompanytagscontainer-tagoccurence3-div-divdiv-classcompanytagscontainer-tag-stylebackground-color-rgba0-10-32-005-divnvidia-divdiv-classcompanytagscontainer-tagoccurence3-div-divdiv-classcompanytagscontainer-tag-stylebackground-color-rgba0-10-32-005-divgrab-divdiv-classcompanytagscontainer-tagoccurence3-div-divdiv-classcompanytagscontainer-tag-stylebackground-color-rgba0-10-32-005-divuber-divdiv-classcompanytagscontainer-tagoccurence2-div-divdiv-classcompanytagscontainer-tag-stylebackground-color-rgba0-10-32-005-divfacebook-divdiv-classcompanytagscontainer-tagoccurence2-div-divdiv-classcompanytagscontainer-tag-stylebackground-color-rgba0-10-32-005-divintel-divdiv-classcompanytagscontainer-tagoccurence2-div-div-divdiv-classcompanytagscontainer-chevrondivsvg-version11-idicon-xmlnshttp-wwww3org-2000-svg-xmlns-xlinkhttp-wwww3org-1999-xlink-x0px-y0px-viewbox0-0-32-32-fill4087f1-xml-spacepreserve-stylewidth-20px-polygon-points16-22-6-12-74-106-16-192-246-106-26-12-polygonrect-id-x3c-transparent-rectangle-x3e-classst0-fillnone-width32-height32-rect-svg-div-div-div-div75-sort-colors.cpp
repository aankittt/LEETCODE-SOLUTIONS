class Solution {
public:
    void sortColors(vector<int>& nums) {
       int  count0=0;
        int count1=0;
        int count2=0;
        vector<int>ank;
        for(int i=0;i<nums.size();i++)
        {
            if(nums[i]==0)
            count0++;
            if(nums[i]==1)
            count1++;
            if(nums[i]==2)
            count2++;
        }
        for(int i=0;i<count0;i++)
            ank.push_back(0);
        for(int i=count0;i<count0+count1;i++)
            ank.push_back(1);
        for(int i=count0+count1;i<count0+count1+count2;i++)
            ank.push_back(2);
            nums=ank;

            


        
        
    }
};