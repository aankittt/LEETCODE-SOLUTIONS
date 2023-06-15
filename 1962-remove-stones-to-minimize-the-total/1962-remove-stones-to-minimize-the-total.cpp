class Solution {
public:
    int minStoneSum(vector<int>& piles, int k) {
        priority_queue<int>pq;
        int ans=0;
        for(int i=0;i<piles.size();i++)
        {
            pq.push(piles[i]);
        }
        while(k--)
        {
            int temp=pq.top();
            pq.pop();
            pq.push(temp - temp/2);
        }
        while(pq.size())
        {
            ans+=pq.top();
              
            pq.pop();
        }

        return ans;
    }
};