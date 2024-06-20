class Solution {
    int f(vector<int>&bd, int m,int k,int mid,int temp)
    {
        int count=0;
        for(int i=0;i<bd.size();i++)
        {
            if(mid>=bd[i])
                temp++;
            else{
                count+=temp/k;
                temp=0;
            }       
        }
        count+=temp/k;
        return count;
    }
public:
    int minDays(vector<int>& bd, int m, int k) {
      int low=INT_MAX;
        int high=INT_MIN;
        
        if((long long)m*k>bd.size())
            return -1;
        
        for(int i=0;i<bd.size();i++)
        {
            low=min(low,bd[i]);
            high=max(high,bd[i]);
        }
        int ans=0;
        
        while(low<=high)
        {
            int mid=(low+high)/2;
            
            int temp=0;
            
            int flowers=f(bd,m,k,mid,temp);
            if(flowers>=m)
            {
                ans=mid;
                high=mid-1;
                
            }
            else
                low=mid+1;
        }
        return ans;
            
    }
};