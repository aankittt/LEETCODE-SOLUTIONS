class Solution {
public:
    long long numberOfPairs(vector<int>& nums1, vector<int>& nums2, int k) {
        unordered_map<int,int>mp;
        for(int i=0;i<nums1.size();i++)
        {
            int z=sqrt(nums1[i]);
            for(int j=1;j<=z;j++)
            {
                if(nums1[i]%j==0)
                {
                    mp[j]++;
                
                if((nums1[i]/j)!=j)
                    mp[nums1[i]/j]++;
                }
            }
        }
        
        long long count=0;
        for(int i=0;i<nums2.size();i++)
        {
            int z=nums2[i]*k;
            if(mp.find(z)!=mp.end())
                count+=mp[z];
        }
        
        return count;
    }
};