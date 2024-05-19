class Solution {
public:
    long long maximumValueSum(vector<int>& nums, int k, vector<vector<int>>& edges) {
        long long sum=0;
        int mini=INT_MAX;
        int count=0;
        for(auto it:nums){
            if((it^k) > it){
                sum+=(it^k);
                count++;
            }
            else{
                sum+=it;
            }
            mini=min(mini,abs(it-(it^k)));
        }
        if(count % 2!=0){
            sum-=mini;   
        }return sum;
    }
};
    