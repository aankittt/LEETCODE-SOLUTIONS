class Solution {
public:
    bool isReachableAtTime(int sx, int sy, int fx, int fy, int t) {
        if(sx==fx && sy==fy)
        {
            if(t==1)
                return false;
            
            else
                return true;
        }
        int x=abs(fx-sx);
        int y=abs(fy-sy);
        
        int ans=max(x,y);
        
        return ans<=t;
    }
};