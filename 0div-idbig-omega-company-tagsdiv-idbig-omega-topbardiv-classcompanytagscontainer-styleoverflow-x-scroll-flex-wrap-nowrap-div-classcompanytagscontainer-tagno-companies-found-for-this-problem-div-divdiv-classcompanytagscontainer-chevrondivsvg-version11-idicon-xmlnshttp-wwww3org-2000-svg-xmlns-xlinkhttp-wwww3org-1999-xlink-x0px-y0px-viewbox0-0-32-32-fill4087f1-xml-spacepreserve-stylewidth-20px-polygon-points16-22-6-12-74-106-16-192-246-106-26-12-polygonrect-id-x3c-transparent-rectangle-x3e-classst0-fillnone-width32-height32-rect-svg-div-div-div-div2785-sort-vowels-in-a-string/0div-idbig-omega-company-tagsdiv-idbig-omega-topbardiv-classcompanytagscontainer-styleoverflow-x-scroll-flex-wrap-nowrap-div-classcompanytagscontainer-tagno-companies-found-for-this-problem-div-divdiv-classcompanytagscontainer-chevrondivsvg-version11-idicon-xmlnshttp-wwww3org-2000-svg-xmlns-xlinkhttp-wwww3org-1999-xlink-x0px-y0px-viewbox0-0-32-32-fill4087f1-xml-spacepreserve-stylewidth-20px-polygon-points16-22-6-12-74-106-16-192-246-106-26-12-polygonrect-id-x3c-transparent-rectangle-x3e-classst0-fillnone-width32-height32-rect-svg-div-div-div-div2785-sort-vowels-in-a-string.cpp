class Solution {
public:
    string sortVowels(string s) {
        string t=s;
        string ankit;
        for(int i=0;i<s.length();i++)
        {
             if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U')
                 ankit.push_back(s[i]);
        }
        sort(ankit.begin(),ankit.end());
        int j=0;
        cout<<ankit;
        for(int i=0;i<s.length();i++)
        {
            if(s[i]=='a'||s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
                t[i]=ankit[j];
            j++;
            }
        }
        return t;
    }
};