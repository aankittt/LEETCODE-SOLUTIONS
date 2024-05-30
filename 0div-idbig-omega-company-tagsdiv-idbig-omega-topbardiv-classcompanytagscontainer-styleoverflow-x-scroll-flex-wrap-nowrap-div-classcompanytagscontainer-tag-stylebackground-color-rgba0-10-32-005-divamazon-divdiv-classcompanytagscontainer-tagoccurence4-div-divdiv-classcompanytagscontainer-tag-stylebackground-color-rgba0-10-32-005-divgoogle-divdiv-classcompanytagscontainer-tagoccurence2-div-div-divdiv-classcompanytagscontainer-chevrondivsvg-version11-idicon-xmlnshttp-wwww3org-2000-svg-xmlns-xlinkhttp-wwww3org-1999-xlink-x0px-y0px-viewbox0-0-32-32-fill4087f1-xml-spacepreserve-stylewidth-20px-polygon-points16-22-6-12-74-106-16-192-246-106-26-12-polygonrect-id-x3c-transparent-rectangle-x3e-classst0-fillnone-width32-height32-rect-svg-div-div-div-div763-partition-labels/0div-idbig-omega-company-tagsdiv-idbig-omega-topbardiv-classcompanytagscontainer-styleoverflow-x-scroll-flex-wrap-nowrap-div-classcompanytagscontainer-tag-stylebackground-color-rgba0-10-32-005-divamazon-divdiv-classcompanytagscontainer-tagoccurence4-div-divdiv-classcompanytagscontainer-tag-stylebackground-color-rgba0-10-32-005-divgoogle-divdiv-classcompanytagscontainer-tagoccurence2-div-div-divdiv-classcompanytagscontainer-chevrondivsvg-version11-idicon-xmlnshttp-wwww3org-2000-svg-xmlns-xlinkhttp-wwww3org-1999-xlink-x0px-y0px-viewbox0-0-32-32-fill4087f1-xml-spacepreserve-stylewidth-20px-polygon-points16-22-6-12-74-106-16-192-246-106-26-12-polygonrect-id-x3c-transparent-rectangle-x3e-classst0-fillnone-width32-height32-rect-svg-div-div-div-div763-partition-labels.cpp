class Solution {
public:
    vector<int> partitionLabels(string s) {
        unordered_map<char,int>mp;
        for(int i=0;i<s.length();i++)
        mp[s[i]]=i;

        int j=0;
        int maxi=-1;
        vector<int>ans;
        for(int i=0;i<s.length();i++)
        {
            maxi=max(maxi,mp[s[i]]);

            if(i==maxi){
            ans.push_back(i-j+1);
            j=i+1;
            }
        }

        return ans;
    }
};