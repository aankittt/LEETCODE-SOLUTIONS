class Solution {
    
    bool f(vector<int>quan,int n,int mid)
    {
        int count=0;
        for(int i=0;i<quan.size();i++)
        {
            quan[i]+=mid-1;
            
            count+=quan[i]/mid;
        }
        if(count>n)
            return 0;
        
        return 1;
    }
public:
    int minimizedMaximum(int n, vector<int>& quan) {
        int low=1;
        int high=INT_MIN;
        
    
        
        for(auto it:quan)
        {
            high=max(high,it);
        }
        int ans=0;
        while(low<=high)
        {
            int mid=low+(high-low)/2;
            
            if(f(quan,n,mid))
            {
                 ans=mid;
                high=mid-1;
                
            }
            else
            {
              low=mid+1;
                
            }
        }
        
        
        return ans;
        
    }
};