class Solution {
void f(int& ans,vector<int>&nums,int n,int index,int sum)
    {
        if(index==n)
        {
            ans+=sum;
            return ;
        }
        
        f(ans,nums,n,index+1,sum^nums[index]);
        f(ans,nums,n,index+1,sum);
        
        
    }
public:
    int subsetXORSum(vector<int>& nums) {
        int n=nums.size();
        
        int ans=0;
        f(ans,nums,n,0,0);
        return ans;
    }
};