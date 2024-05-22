class Solution {
    bool ispal(string z)
    {
        string ankit=z;
        reverse(z.begin(),z.end());
        return z==ankit;
    }
    void f(int index,vector<vector<string>>&ans,vector<string>temp,string& s)
    {
        if(index==s.size())
        {
            ans.push_back(temp);
            return ;
        }
        for(int j=index;j<s.size();j++)
        {
            string z=s.substr(index,j-index+1);
            if(ispal(z))
            {
                temp.push_back(z);
                f(j+1,ans,temp,s);
                temp.pop_back();
            }
        }

    }
public:
    vector<vector<string>> partition(string s) {
        vector<vector<string>>ans;
        vector<string>temp;
        f(0,ans,temp,s);

        return ans;
    }
};