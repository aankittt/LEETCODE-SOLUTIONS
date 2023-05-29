class Solution {
public:
    void permutaion(vector<int> &nums,vector<vector<int>>&ans,vector<int>&freq,vector<int>temp)
    {
        if(temp.size()==nums.size())
        {
            ans.push_back(temp);
            return;
        }
        for(int i=0;i<nums.size();i++)
        {
            if(freq[i]==0){
            temp.push_back(nums[i]);
            freq[i]=1;
            permutaion(nums,ans,freq,temp);
            freq[i]=0;
            temp.pop_back();
            }
        }
    }
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        vector<int>freq(nums.size(),0);
        vector<int>temp;
        permutaion(nums,ans,freq,temp);
        return ans;
    }
};