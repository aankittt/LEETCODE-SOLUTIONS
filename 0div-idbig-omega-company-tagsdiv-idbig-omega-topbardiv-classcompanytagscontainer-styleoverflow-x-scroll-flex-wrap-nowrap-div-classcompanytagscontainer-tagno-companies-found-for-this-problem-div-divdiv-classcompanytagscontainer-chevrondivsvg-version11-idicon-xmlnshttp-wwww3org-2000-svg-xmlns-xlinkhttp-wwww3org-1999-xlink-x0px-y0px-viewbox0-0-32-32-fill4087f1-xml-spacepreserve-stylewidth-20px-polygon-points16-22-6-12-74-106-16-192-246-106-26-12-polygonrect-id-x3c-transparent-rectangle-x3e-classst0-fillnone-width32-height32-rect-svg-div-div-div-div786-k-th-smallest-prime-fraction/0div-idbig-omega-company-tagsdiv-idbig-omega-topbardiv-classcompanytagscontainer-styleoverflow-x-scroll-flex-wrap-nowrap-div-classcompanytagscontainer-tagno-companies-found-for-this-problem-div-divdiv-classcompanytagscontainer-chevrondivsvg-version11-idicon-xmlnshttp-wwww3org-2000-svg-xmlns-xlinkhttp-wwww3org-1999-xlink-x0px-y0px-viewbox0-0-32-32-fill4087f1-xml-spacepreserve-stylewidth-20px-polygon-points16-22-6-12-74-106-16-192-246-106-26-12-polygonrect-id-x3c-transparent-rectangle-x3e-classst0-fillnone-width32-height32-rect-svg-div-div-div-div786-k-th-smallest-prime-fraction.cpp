class Solution {
public:
    vector<int> kthSmallestPrimeFraction(vector<int>& arr, int k) {
        priority_queue<pair<double,pair<int,int>>>pq;
        for(int i=0;i<arr.size();i++)
        {
            for(int j=i+1;j<arr.size();j++)
            {
                double z=arr[i]/(1.0*arr[j]);
                pq.push({z,{arr[i],arr[j]}});
                if(pq.size()>k){
                    cout<<pq.top().first<<endl;
                    pq.pop();
                }
            }
        }
        return{pq.top().second.first,pq.top().second.second};
        
        
    }
};