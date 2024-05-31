class Solution {
public:
    vector<int> singleNumber(vector<int>& nums) {
        long xor1=0;
        vector<int>ans(2,0);
        for(auto it: nums)
        {
            xor1=xor1^it;
        }
        xor1=(xor1)&(-xor1);
        for(auto it :nums)
        {
            if(xor1&it)       //SET BIT WALA 
            ans[0]=ans[0]^it;
            else              //BINA SET BIT WALA 
            ans[1]=ans[1]^it;
        }

        return ans;
        
        
    }
};