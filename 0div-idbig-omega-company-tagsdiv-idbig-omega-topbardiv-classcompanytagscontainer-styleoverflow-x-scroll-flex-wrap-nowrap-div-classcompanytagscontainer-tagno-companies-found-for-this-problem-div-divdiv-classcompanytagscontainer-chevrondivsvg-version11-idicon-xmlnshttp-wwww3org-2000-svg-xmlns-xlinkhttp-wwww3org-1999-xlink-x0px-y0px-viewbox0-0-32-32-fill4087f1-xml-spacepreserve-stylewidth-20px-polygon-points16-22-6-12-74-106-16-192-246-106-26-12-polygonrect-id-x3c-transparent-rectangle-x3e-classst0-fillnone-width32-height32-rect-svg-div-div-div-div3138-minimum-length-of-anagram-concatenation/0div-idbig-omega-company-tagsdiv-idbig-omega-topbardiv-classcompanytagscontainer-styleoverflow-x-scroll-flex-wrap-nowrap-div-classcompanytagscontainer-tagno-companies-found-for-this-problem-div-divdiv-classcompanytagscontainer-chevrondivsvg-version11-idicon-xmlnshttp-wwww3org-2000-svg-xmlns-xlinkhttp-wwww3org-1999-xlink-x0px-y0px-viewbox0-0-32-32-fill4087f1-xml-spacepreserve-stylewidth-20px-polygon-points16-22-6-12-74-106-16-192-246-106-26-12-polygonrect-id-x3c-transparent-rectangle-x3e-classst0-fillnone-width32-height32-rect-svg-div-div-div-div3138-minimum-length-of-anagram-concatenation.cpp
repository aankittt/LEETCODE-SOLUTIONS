class Solution {
    bool check(string s,int len)
    {
        int n=s.length();
        int startfreq[26]={0};
        for(int i=0;i<len;i++)
            startfreq[s[i]-'a']++;
        
        for(int i=len;i<n;i+=len)
        {
            int secondfreq[26]={0};
            for(int j=i;j<i+len;j++)
                secondfreq[s[j]-'a']++;
            
            for(int j=0;j<26;j++)
                if(secondfreq[j]!=startfreq[j])
                    return false;
            
        }
        return true;
    }
public:
    int minAnagramLength(string s) {
       for(int i=1;i<=s.length();i++)
       {
           if(s.length()%i==0 && (check(s,i)))
           return i;
       }
        
        return s.length();
    }
};