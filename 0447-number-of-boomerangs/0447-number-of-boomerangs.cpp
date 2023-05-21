class Solution {
public:
    int numberOfBoomerangs(vector<vector<int>>& points) {
        int count=0;
        unordered_map<int,int>mp;
        for(int i=0;i<points.size();i++)
        {   
            for(int j=0;j<points.size();j++)
            {
                if(i!=j)
                {
                    int dist=pow(points[i][0]-points[j][0],2)+pow(points[i][1]-points[j][1],2);
                    mp[dist]++;

                }
               

            }

             for(auto it:mp)
                {
                    if(it.second>=2)
                    {
                        count=count+(it.second*(it.second-1));
                    }
                }

                mp.clear();

        }

        return count;
    }
};