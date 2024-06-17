class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int count=0;
            for(int j=i;j<arr.size();j++)
            {
                count+=arr[j];
                if((j-i+1)&1)
                    sum+=count;
                    
            }
        }
        
        return sum;
    }
};