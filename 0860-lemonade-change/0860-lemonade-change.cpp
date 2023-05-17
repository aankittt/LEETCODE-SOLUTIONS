class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        vector<int>ans(3,0);

        for(int i=0;i<bills.size();i++)
        {
            if(bills[i]==5)
            {
                ans[0]++;
            }
            else if(bills[i]==10)
            {
                if(ans[0]>=1)
                {
                   ans[0]--;
                    ans[1]++;
                }   
                else 
                return false;
            }
            else
            {
                if(ans[0]>=1 && ans[1]>=1)
                {
                    ans[0]--;
                    ans[1]--;
                    ans[2]++;
                }
                else if(ans[0]>=3)
                {
                    ans[0]=ans[0]-3;
                    ans[2]++;
                }
                else 
                return false;
            }
        }
        return true;


    }
};