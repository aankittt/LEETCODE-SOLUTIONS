class Solution {
public:
    int passThePillow(int n, int time) {
        int round=time/(n-1);
        
        int left=time%(n-1);
        
        if(round&1)
            return n-left;
        else
            return left+1;
    }
};