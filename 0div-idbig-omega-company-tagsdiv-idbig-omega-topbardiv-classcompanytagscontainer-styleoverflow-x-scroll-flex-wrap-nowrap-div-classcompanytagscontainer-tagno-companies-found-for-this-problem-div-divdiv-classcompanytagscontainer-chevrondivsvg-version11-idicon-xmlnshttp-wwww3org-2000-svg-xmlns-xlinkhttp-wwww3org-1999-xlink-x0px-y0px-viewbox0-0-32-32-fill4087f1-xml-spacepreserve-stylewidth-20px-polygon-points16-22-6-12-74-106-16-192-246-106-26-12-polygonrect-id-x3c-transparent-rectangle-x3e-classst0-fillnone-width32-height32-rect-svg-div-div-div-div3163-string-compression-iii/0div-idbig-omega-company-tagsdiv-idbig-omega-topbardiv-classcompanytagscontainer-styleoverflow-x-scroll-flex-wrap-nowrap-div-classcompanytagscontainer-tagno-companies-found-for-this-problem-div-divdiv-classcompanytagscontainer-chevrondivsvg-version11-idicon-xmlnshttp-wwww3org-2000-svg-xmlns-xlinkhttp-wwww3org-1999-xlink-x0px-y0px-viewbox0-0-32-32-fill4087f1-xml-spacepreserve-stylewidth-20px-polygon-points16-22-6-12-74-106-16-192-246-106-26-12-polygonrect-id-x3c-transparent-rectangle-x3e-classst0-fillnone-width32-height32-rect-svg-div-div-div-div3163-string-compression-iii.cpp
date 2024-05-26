class Solution {
public:
    string compressedString(string word) {
        int n=word.size();
        
        int count=1;
        char c=word[0];
        
        string ans="";
        for(int i=1;i<word.length();i++)
        {
            if(word[i]==c)
            {
                    if(count<9)
                        count++;
                else  
                {
                    ans+=to_string(count);
                    ans+=c;
                    
                    count=1;
                    
                }
                        
            }
            else
            {
                ans+=to_string(count);
                ans+=c;
                c=word[i];
                count=1;
                
            }
        }
        if(count)
        {
           ans+=to_string(count);
                ans+=c; 
        }
        return ans;
    }
};