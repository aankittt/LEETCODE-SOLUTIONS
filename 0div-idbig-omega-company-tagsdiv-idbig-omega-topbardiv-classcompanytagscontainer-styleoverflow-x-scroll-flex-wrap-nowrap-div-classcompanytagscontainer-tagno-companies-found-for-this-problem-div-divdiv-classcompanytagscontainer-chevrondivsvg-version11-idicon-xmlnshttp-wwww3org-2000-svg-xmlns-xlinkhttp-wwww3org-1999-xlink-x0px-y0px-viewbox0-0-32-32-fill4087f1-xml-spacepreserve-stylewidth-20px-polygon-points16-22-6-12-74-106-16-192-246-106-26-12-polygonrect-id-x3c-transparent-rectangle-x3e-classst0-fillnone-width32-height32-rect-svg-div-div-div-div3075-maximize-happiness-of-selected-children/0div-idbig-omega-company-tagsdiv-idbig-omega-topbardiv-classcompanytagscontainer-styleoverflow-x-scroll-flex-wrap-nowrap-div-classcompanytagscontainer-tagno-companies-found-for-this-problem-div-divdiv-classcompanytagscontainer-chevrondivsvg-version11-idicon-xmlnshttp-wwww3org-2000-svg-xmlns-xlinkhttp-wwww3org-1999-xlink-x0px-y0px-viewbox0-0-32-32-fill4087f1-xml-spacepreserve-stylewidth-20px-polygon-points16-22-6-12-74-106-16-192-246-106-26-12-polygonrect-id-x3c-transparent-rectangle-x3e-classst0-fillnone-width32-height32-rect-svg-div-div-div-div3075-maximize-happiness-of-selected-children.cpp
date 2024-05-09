class Solution {
public:
    long long maximumHappinessSum(vector<int>& hp, int k) {
        long long ans=0;
        sort(hp.rbegin(),hp.rend());
        int count=0;
        for(int i=0;i<hp.size();i++)
        {
            
            count++;
            if(hp[i]-i>0)
            ans+=hp[i]-i;
            
            if(count==k)
                break;
        
        }
        
        return ans;
        
    }
};