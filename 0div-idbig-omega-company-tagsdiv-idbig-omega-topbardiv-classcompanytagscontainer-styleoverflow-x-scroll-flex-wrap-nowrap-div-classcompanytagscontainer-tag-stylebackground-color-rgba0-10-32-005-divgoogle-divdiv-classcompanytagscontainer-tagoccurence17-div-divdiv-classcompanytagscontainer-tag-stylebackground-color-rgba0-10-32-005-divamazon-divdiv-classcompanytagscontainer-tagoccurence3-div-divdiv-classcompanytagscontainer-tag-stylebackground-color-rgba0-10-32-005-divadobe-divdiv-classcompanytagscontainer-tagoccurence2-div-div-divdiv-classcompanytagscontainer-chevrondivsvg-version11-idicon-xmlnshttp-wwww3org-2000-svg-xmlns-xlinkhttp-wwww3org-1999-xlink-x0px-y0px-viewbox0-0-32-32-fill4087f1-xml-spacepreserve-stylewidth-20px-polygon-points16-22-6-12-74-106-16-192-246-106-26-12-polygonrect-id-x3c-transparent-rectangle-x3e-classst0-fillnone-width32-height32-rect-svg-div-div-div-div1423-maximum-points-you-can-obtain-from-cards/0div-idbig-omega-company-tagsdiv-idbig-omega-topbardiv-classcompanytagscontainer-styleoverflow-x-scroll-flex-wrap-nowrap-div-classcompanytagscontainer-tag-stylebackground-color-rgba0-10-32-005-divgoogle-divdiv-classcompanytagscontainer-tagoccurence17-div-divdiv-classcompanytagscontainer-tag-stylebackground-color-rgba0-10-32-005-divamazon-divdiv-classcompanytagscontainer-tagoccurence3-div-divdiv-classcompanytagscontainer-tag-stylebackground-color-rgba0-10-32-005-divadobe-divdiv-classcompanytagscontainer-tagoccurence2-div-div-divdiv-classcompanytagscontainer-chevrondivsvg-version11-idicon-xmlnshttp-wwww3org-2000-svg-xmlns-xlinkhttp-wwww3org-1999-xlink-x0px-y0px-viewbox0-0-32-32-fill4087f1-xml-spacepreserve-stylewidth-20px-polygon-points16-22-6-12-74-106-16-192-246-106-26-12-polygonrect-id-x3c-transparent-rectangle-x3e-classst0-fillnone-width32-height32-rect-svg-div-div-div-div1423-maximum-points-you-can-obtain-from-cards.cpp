#define ll long long 
class Solution {
public:
    int maxScore(vector<int>& cp, int k) {
        ll sum=0;
        int i=0;
        for(i=0;i<k;i++)
        sum+=cp[i];
        
        int j=cp.size()-1;
        
        int maxi=-1;
        maxi=max<ll>(maxi,sum);
        i--;
        while(i>=0)
        {
            sum-=cp[i];
            sum+=cp[j];
            maxi=max<ll>(maxi,sum);
            i--;
            j--;
        }
        
        return maxi;
        
        
    }
};