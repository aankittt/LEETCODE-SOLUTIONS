class Solution {
    int f(vector<int>pos,int start,int mid)
    {
        int count=0;
        for(int i=0;i<pos.size();i++)
        {
            if(pos[i]>=start)
            {
                count++;
                start=pos[i]+mid;
            }
        }
        return count;
    }
public:
    int maxDistance(vector<int>& pos, int m) {
        sort(pos.begin(),pos.end());
        
        int low=1;
        int high=INT_MIN;
        
        for(auto it:pos)
        {
            high=max(high,it);
        }
        
        int ans=0;
        while(low<=high)
        {
            int mid=(high+(low-high)/2);
            
            int start=pos[0];
           int balls=f(pos,start,mid);
            
            if(balls>=m)
            {
                ans=mid;
                low=mid+1;
            }
            else
            {
                high=mid-1;
            }
        }
        
        return high;
    }
};