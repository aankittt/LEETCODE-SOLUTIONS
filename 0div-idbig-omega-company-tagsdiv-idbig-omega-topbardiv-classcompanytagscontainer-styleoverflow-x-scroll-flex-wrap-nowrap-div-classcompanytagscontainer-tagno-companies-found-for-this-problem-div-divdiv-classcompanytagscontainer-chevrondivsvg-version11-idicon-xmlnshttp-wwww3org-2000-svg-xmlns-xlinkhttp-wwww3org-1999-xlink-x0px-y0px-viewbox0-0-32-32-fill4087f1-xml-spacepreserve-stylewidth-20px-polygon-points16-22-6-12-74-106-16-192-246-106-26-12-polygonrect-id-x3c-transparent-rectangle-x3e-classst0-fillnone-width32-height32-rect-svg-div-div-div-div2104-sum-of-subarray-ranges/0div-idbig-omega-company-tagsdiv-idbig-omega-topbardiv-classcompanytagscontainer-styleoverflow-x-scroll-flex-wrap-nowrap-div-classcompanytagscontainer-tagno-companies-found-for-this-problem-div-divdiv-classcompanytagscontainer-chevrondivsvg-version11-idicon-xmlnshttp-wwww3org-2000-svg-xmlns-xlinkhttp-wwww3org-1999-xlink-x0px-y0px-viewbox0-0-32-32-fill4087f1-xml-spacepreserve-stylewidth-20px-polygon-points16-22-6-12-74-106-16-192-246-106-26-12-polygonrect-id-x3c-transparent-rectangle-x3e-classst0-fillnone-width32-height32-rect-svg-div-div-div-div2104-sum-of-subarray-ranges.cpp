class Solution {
public:
    long long subArrayRanges(vector<int>& arr) {
         vector<int>nsl;

        stack<int>st;
        for(int i=0;i<arr.size();i++)
        {
            while(!st.empty() && arr[st.top()]>=arr[i])
            st.pop();

            if(st.empty())
            nsl.push_back(-1);
            else
            nsl.push_back(st.top());

            st.push(i);
        }

        vector<int>nsr;
        stack<int>st2;
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st2.empty() && arr[st2.top()]>arr[i])
            st2.pop();

            if(st2.empty())
            nsr.push_back(arr.size());
            else
            nsr.push_back(st2.top());

            st2.push(i);
        }
        reverse(nsr.begin(),nsr.end());
        long long ans=0;


          for (int i = 0; i < arr.size(); i++) {
            int left = i - nsl[i];
            int right = nsr[i] - i;
            long long val = ((1LL)*left * right) ;
            ans = (ans + val * arr[i]);
        }
        

        vector<int>nll;

        stack<int>st3;
        for(int i=0;i<arr.size();i++)
        {
            while(!st3.empty() && arr[st3.top()]<=arr[i])
            st3.pop();

            if(st3.empty())
            nll.push_back(-1);
            else
            nll.push_back(st3.top());

            st3.push(i);
        }

        vector<int>nlr;
        stack<int>st4;
        for(int i=arr.size()-1;i>=0;i--)
        {
            while(!st4.empty() && arr[st4.top()]<arr[i])
            st4.pop();

            if(st4.empty())
            nlr.push_back(arr.size());
            else
            nlr.push_back(st4.top());

            st4.push(i);
        }
        reverse(nlr.begin(),nlr.end());
        long long ans2=0;


          for (int i = 0; i < arr.size(); i++) {
            int left = i - nll[i];
            int right = nlr[i] - i;
            long long val = ((1LL)*left * right) ;
            ans2 = (ans2 + val * arr[i]) ;
        }


        return ans2-ans;
    }
};