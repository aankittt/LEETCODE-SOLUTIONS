class Solution {
public:
    vector<bool> checkArithmeticSubarrays(vector<int>& nums, vector<int>& l, vector<int>& r) {
        vector<bool>ans;

        for(int i=0;i<l.size();i++)
        {
            bool flag=0;
            vector<int>temp;
            for(int j=l[i];j<=r[i];j++)
            {
                temp.push_back(nums[j]);
            }
            sort(temp.begin(),temp.end());

            int diff=temp[1]-temp[0];
            for(int i=1;i<temp.size();i++)
            {
                if(temp[i]-temp[i-1]!=diff)
                {
                flag=1;
                break;
                }
            }
            if(flag)
            ans.push_back(0);
            else
            ans.push_back(1);
        }

        return ans;
    }
};