class Solution {
void f( vector<string>&ans,int index,string temp, unordered_map<string,int>& mp,string& s)
{
    if(index==s.length())
    {
        ans.push_back(temp);
    }

    for(int j=index;j<s.length();j++)
    {
        string word=s.substr(index,j-index+1);
        if(mp.find(word)!=mp.end())
           {
            if(index>0)temp+=' ';
            temp+=word;
            f(ans,j+1,temp,mp,s);
            for(int k=0;k<word.length();k++)
            temp.pop_back();

            if(index>0)temp.pop_back();
        }
    }
}
public:
    vector<string> wordBreak(string s, vector<string>& wd) {
       unordered_map<string,int>mp;
       for(auto it:wd)
       mp[it]++;

        vector<string>ans;
        string temp="";

        f(ans,0,temp,mp,s);
        return ans;

    }
};