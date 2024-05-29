class Solution {
    void change(string& s)
    {
        int index=s.length()-1;
        while(index>=0 && s[index]=='1')
        {
            s[index--]='0';
        }
        if(index<0)
            s='1'+s;
        else
            s[index]='1';
        
        
    }
public:
    int numSteps(string s) {
        int n=s.length()-1;
        int count=0;
        while(s.length()>1)
        {
            int n=s.length()-1;
            if(s[n]=='0'){
                s.pop_back();
                count++;
            }
            
            else
            {
                count++;
                change(s);
            }
                
        }
        return count;
        
    }
};