class Solution {
public:
    bool istrue(vector<int>s1,vector<int>s2)
    {
        for(int i=0;i<26;i++)
        {
            if(s1[i]!=s2[i])
            return false;
        }
        return true;
    }
       bool checkInclusion(string s1, string s2) {
       int k=s1.length();
        if(s1.size()>s2.size())
        return false;
        vector<int>freq(26,0);
        for(int i=0;i<s1.length();i++)
        {
            freq[s1[i]-'a']++;
        }
        vector<int>freq2(26,0);
        int i=0;
        int j=0;
        while(j<s1.length())
        {
            freq2[s2[j]-'a']++;
            j++;
        }
        if(istrue(freq,freq2))
            return true;
        while(j<s2.length())
        {
            freq2[s2[j]-'a']++;
            freq2[s2[j-k]-'a']--;
            j++;

            if(istrue(freq,freq2))
            return true;

        }
         
        return false;

    }
};