class Solution {
public:
    int longestNiceSubarray(vector<int>& nums) {
        int bits[32]={0};
        
        int j=0;
        int ans=0;
        
        for(int i=0;i<nums.size();i++)
        {
            bool flag=false;
            
            for(int k=0;k<32;k++)
            {
                if(nums[i] & (1<<k))
                    bits[k]++;
                
                if(bits[k]>1)
                    flag=1;
            }
            
            if(flag==false)
            {
                ans=max(ans,i-j+1);
            }
            else
            {
                while(j<=i)
                {
                    for(int k=0;k<32;k++)
                    {
                          if(nums[j] & (1<<k))
                              bits[k]--;
                    }
                    j++;
                    bool f=false;
                        for(int k=0;k<32;k++)
                        {
                            if(bits[k]>1)
                                f=1;
                        }
                    if(!f)
                    break;
                        
                }
            }
        }
        
        return ans;
    }
};