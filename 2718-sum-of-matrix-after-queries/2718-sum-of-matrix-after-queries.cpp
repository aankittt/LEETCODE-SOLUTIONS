class Solution {
public:
    long long matrixSumQueries(int n, vector<vector<int>>& queries) {
    int m=n;
    long long sum=0;
    vector<bool>row(n,0);
    vector<bool>col(n,0);

    for(int i=queries.size()-1;i>=0;i--)
    {
        int type=queries[i][0];
        int index=queries[i][1];
        int val=queries[i][2];

        if(type==0)
        {
            if(row[index]==0)
            {
                row[index]=1;
                sum+=m*val;
                n--;
            }
        }
        else
        {
            if(col[index]==0)
            {
                col[index]=1;
                sum+=n*val;
                m--;
            }
        }

    }
    return sum;



    }
};