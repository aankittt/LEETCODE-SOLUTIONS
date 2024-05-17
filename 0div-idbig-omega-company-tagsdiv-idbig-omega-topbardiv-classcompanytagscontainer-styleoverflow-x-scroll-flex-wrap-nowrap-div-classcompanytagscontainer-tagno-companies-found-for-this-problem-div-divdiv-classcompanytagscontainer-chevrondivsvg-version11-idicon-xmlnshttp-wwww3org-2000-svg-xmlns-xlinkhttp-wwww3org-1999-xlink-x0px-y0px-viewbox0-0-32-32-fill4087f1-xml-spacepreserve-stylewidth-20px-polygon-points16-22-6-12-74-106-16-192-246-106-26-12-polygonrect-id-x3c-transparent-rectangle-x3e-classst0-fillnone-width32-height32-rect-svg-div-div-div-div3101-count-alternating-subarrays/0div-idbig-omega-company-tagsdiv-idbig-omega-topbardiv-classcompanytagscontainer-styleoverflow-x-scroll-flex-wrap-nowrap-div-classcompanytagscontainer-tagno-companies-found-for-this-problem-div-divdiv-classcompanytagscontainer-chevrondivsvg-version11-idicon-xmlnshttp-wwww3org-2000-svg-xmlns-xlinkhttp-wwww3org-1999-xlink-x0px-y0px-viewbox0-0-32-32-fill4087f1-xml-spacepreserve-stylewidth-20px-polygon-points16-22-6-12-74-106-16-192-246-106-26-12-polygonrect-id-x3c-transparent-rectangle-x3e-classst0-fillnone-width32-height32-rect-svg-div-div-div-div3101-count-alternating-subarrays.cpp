#define ll long long 
class Solution {
public:
    long long countAlternatingSubarrays(vector<int>& nums) {
        
        ll i=0;
        ll j=1;
        ll count=1;

        while(j<nums.size())
        {
            if(nums[j]==nums[j-1])
            {
                i=j;
            }
            count+=(j-i+1);

            j++;
        }
        return count;

    }
};