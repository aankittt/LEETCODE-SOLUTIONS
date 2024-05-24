class Solution {
    
    void f(int index,vector<string>&words,int curr,vector<int>&score,vector<int>&freq,int& maxi)
    {
        
        
        if(index>=words.size()){
             maxi=max(curr,maxi);
            return ;
        }
        
        int j=0;
        int tempscore=0;
        vector<int>tempfreq=freq;
        while(j<words[index].length())
        {
            char ch=words[index][j];
            tempfreq[ch-'a']--;
            tempscore+=score[ch-'a'];
            
            if(tempfreq[ch-'a']<0)
                break;
            
            j++;
        }
        if(j==words[index].length())
        {
            f(index+1,words,curr+tempscore,score,tempfreq,maxi);
        }
        
        f(index+1,words,curr,score,freq,maxi);
        
        
    }
public:
    int maxScoreWords(vector<string>& words, vector<char>& letters, vector<int>& score) {
        vector<int>freq(26,0);
        for(int i=0;i<letters.size();i++)
        freq[letters[i]-'a']++;
        
        
        int maxi=0;
        f(0,words,0,score,freq,maxi);
        
        return maxi;
        
    }
};