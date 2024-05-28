class Solution {
public:
    int equalSubstring(string s, string t, int cost) {
        int i=0;
        int j=0;
        int maxi=0;
        while(j<s.length())
        {
            cost-=abs(s[j]-t[j]);
            
            while(cost<0)
            {
                cost+=abs(s[i]-t[i]);
                i++;
            }
            
            maxi=max(maxi,j-i+1);
            j++;
        }
        
        return maxi;
        
        
    }
};