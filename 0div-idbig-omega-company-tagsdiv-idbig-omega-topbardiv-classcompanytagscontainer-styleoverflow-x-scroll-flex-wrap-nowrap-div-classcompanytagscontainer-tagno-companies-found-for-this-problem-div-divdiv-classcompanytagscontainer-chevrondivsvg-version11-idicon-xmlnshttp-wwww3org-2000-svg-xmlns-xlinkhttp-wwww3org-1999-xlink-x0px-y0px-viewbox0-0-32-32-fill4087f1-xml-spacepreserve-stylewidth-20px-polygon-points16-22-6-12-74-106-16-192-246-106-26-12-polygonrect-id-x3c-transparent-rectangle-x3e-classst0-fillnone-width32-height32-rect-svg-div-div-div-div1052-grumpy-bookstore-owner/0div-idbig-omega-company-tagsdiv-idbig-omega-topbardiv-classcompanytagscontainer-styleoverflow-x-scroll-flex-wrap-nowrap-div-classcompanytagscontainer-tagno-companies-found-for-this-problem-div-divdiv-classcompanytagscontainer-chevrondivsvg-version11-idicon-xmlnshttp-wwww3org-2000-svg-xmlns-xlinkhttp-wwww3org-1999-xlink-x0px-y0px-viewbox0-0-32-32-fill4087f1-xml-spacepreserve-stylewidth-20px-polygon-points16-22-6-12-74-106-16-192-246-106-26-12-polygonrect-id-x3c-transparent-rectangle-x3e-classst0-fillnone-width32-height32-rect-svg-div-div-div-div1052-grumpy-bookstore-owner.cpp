class Solution {
public:
    int maxSatisfied(vector<int>& customers, vector<int>& grumpy, int minutes) {
        int maxi=-1;
        int sum=0;
        int ans=0;
        int i=0;int j=0;
        while(j<grumpy.size())
        {
            if(grumpy[j]==0)
            ans+=customers[j];
            else
            {
                sum+=customers[j];
            }

            if(j-i+1==minutes)
            {
                maxi=max(maxi,sum);
                if(grumpy[i]==1)
                sum-=customers[i];

                i++;
            }
            j++;

        }
        return maxi+ans;
    }
};