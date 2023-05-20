class Solution {
public:
    double findMaxAverage(vector<int>& nums, int k) {
        double j=0;
        double maxsum=0;
        double ans=INT_MIN;
        double avg=0;

        for(int i=0;i<nums.size();i++)
        {
            maxsum+=nums[i];
            while(i-j+1>k)
            {
                maxsum=maxsum-nums[j];
                j++;
            }
            if(i-j+1==k){
            avg=maxsum/k;
            ans=max(ans,avg);
            }
        }
        return ans;

    }
};