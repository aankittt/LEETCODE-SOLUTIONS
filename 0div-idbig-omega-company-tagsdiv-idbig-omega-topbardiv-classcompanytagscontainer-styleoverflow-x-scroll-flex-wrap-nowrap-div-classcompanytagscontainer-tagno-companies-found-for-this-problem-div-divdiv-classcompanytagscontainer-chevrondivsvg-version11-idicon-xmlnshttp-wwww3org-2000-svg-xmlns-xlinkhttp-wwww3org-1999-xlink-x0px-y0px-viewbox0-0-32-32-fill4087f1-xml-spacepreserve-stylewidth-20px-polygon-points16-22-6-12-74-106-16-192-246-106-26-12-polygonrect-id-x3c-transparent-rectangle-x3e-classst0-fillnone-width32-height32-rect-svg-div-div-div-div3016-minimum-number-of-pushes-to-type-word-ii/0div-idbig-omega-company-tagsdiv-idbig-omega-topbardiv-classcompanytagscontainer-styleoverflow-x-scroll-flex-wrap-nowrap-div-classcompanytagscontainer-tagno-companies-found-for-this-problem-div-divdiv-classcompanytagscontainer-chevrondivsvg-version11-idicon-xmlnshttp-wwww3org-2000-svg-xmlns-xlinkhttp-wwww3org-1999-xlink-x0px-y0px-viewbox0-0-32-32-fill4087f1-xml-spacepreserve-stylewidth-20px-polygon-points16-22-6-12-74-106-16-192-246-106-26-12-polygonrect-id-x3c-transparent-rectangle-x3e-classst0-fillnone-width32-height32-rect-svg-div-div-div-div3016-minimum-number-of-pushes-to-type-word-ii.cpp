class Solution {
public:
    int minimumPushes(string word) {
        vector<int>freq(26,0);
      for(int i=0;i<word.length();i++)
        {
            freq[word[i]-'a']++;
        }
        
        sort(freq.rbegin(),freq.rend());
        
        int count=1;
        int ans=0;
        for(int i=0;i<26;i++)
        {
            if(freq[i]==0)
                break;
            else if(count<=8)
            {
                ans+=(freq[i]*1);
            }
            else if(count<=16)
                ans+=(freq[i]*2);
            
           else if(count<=24)
                ans+=(freq[i]*3);
            else if(count<=26)
                ans+=(freq[i]*4);
            
            
            count++;
        }
        
        return ans;
    }
};