class Solution {
public:
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>temp;
        int index=0;
        backtrack(ans,temp,index,nums);
        return ans;
    }

    void backtrack(vector<vector<int>>&ans,vector<int>temp,int index,vector<int>nums)
    {

        if(index==nums.size())
        {
            ans.push_back(temp);
            return;
        }

        temp.push_back(nums[index]);
        backtrack(ans,temp,index+1,nums);
        temp.pop_back();
        backtrack(ans,temp,index+1,nums);
    
    }
};