class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& arr) {
        int n=arr.size();
        int sum=0;
        for(int i=0;i<arr.size();i++)
        {
            int s=(n-i)*(i+1);
            
            if(s&1)
                s++;
            
            s=s/2;
            sum+=s*arr[i];
        }
        
        return sum;
    }
};