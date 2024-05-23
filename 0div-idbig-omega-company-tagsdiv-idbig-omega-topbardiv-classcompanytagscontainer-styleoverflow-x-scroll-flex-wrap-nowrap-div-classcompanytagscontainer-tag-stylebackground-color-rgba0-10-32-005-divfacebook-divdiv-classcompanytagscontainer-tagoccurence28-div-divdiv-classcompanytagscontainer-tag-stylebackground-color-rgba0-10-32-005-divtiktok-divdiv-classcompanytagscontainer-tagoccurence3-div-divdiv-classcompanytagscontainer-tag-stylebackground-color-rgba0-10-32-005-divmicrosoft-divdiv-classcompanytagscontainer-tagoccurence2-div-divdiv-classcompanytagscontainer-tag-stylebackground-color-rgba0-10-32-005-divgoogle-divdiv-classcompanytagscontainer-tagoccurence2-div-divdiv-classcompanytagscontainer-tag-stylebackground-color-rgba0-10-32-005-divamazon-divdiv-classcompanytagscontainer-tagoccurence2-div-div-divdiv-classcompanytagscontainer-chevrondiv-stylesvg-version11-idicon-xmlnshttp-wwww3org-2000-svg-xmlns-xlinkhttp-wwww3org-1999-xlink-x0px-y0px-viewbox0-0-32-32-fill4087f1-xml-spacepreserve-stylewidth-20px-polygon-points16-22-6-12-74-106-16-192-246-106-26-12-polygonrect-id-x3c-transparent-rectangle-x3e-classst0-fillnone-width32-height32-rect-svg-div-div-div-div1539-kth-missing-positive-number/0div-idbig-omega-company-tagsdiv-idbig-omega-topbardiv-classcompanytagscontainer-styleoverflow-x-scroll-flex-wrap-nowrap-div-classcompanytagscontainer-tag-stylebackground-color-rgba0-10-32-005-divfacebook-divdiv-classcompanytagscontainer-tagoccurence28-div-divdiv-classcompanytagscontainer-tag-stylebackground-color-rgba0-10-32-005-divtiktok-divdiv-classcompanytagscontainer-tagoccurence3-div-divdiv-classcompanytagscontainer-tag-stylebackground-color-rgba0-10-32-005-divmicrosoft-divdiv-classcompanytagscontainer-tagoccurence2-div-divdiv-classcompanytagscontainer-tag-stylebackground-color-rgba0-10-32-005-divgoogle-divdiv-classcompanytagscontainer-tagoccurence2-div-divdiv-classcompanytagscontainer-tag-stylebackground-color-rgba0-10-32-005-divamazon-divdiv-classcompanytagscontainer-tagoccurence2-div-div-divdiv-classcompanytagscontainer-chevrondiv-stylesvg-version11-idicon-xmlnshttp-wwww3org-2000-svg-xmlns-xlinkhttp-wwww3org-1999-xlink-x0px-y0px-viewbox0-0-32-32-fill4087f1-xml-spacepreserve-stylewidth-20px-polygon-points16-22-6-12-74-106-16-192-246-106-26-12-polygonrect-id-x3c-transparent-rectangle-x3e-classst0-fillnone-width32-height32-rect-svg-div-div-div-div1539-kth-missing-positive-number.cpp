#define ll long long
class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        ll low=0;
        ll high=arr.size()-1;
        
        while(low<=high)
        {
            ll mid=low+(high-low)/2;
            
            ll missing=arr[mid]-mid-1;
            
            if(missing<k)
                low=mid+1;
            else
                high=mid-1;
                
        }
        
        
        return high+1+k;
    }
};