class Solution {
public:
    int getWinner(vector<int>& arr, int k) {
       int maxi=-1e9;
       for(int i=0;i<arr.size();i++)
       {
           maxi=max(maxi,arr[i]);
       }

       int count=0;
       int current=arr[0];

       for(int i=1;i<arr.size();i++)
       {
           if(arr[i]>current)
           {
               current=arr[i];
               count=1;
           }
           else
           count++;

           if(count==k || current==maxi)
           return current;
       }
        return 0;
    }
};