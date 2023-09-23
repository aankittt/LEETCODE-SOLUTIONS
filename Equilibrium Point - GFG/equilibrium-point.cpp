//{ Driver Code Starts
#include <iostream>
using namespace std;


// } Driver Code Ends
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
    
         if(n==1){
            return 1;
        }
        
    
        long long int total_sum = 0;
        int ans =-1;
        for(int i=0; i<n; i++){
            total_sum+=a[i];
        }
        long long int current_sum=0;
        current_sum+=a[0];
        for(int i=1; i<n; i++){
            if(current_sum == total_sum-current_sum - a[i]){
                ans =i;
                break;
            }else{
                current_sum+=a[i];
            }
        }
        if(ans==-1){
            return ans;
        }
        return ans+1;
    }

};

//{ Driver Code Starts.


int main() {

    long long t;
    
    //taking testcases
    cin >> t;

    while (t--) {
        long long n;
        
        //taking input n
        cin >> n;
        long long a[n];

        //adding elements to the array
        for (long long i = 0; i < n; i++) {
            cin >> a[i];
        }
        
        Solution ob;

        //calling equilibriumPoint() function
        cout << ob.equilibriumPoint(a, n) << endl;
    }
    return 0;
}

// } Driver Code Ends