class Solution {
public:
    int countTriplets(vector<int>& arr) {
        int count=0;
        for(int i=0;i<arr.size();i++)
        {   
            int ans=0;
            for(int j=i;j<arr.size();j++)
            {
                ans=ans^arr[j];
                if((j-i+1)>=2)
                {
                    if(ans==0)
                    count+=j-i;
                }
            }
        }
        
        return count;
    }
};