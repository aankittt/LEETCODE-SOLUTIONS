//{ Driver Code Starts
//Initial Template for C++
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
//User function Template for C++

class Solution{
public:
    void backtrack(int index,int num,string ans)
    {
        if(index==num)
        {
            cout<<ans<<" ";
            return;            
        }
        
        if(index!=0 && ans[index-1]=='1')
        {
            backtrack(index+1,num,ans+'0');
        }
        else
        {
            backtrack(index+1,num,ans+'0');
            backtrack(index+1,num,ans+'1');
        }
        
    }
    
    void generateBinaryStrings(int num){
        vector<int>temp;
        
        backtrack(0,num,"");
    }
};

//{ Driver Code Starts.
int main(){
    int t = 1;
    cin >> t;


    while(t--){
        //Input
        int n; cin >> n;

        Solution obj;
        obj.generateBinaryStrings(n);
        cout << endl;
    }

    return 0;
}

// } Driver Code Ends