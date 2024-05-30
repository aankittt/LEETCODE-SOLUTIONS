class Solution {
public:
    int partitionString(string s) {
        unordered_map<char,int>mp;
        int count=1;
        for(int i=0;i<s.length();i++)
        {
            mp[s[i]]++;
            
            if(mp[s[i]]>=2)
            {
                count++;
                mp.clear();
                mp[s[i]]++;
            }
        }
        
        return count;
    }
};