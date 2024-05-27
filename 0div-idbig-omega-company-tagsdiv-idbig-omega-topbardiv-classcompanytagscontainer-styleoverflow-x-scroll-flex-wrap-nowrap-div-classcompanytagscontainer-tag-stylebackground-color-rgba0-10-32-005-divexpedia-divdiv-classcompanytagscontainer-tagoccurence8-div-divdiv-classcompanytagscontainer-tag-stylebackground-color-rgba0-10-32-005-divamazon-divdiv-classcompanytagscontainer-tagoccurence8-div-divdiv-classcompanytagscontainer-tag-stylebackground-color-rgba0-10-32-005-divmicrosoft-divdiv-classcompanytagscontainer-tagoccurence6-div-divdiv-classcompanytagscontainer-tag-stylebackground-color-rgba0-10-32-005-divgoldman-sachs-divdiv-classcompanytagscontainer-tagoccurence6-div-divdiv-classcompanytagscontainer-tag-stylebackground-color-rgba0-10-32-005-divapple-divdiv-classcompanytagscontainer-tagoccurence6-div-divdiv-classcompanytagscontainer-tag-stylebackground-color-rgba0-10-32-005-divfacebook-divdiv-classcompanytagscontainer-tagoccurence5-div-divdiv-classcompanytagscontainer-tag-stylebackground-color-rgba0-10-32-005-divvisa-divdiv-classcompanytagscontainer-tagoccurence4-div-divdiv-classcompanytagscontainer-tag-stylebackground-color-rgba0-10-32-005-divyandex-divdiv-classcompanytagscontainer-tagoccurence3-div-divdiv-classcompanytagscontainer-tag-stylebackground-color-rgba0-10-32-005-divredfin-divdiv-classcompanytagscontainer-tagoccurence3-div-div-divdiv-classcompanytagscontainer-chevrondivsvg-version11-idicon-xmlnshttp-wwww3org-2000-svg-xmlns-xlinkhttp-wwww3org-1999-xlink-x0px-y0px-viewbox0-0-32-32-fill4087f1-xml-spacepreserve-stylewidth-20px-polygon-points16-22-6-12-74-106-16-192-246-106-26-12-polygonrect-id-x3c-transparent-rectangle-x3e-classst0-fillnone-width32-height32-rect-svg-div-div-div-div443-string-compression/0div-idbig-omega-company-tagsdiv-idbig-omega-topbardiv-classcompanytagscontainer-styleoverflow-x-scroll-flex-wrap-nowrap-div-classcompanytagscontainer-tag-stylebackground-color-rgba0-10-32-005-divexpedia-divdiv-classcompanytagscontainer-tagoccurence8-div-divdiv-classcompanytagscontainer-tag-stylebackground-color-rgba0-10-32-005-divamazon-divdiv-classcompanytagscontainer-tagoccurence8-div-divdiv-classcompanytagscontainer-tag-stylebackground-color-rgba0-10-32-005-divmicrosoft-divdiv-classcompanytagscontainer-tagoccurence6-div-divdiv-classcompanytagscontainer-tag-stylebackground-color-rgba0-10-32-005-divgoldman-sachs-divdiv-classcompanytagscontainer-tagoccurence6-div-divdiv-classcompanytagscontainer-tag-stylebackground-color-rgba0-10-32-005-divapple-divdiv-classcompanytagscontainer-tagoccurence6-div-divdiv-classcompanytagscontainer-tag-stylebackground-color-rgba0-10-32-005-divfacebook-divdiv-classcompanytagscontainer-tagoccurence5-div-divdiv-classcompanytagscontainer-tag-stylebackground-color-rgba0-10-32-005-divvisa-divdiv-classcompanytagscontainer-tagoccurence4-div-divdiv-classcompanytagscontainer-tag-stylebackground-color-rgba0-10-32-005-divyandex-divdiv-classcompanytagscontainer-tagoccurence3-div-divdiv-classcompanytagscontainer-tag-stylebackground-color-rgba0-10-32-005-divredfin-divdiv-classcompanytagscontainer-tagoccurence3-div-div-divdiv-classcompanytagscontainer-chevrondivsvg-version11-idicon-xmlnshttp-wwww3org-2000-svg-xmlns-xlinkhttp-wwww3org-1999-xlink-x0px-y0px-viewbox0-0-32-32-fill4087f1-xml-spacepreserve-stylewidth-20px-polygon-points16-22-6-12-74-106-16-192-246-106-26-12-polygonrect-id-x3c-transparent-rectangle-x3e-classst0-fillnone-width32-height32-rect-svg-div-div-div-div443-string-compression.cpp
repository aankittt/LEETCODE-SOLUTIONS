class Solution {
public:
    int compress(vector<char>& chars) {
      int count=1;
        char c=chars[0];
        vector<char>ans;
        int index=0;
        
        for(int i=1;i<chars.size();i++)
        {
            if(chars[i]==c)
            {
                count++;
            }
            else
            {
                chars[index]=c;
                index++;
                if(count>1)
                {
                    string s=to_string(count);
                    for(int i=0;i<s.size();i++)
                        chars[index++]=s[i];
                }
                c=chars[i];
                count=1;
            }            
        }
        if(count){
            chars[index]=c;
                index++;
                if(count>1)
                {
                    string s=to_string(count);
                    for(int i=0;i<s.size();i++)
                        chars[index++]=s[i];
                        
                }
        }
        return index;
    }
};