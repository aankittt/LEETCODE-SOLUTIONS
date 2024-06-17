class Solution {
public:
    bool judgeSquareSum(int c) {
        
        long long  left=0;
        long long right=static_cast<long long>(sqrt(c));
        while(left<=right)
        {
            long long z=(left*left)+(right*right);
            if(z==c)
                return 1;
            else if(z>c)
                right--;
            else
                left++;
        }
        
        return 0;
    }
};