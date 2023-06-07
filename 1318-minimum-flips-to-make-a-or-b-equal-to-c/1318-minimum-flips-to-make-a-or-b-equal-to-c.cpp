class Solution {
public:
    int minFlips(int a, int b, int c) {
        int flip=0;
            while(a>0 || b>0 || c>0)
            {
                int bita=a&1;
                int bitb=b&1;
                int bitc=c&1;

                if(bitc==0)
                {
                    flip=flip+bita+bitb;

                }
                else
                {
                    if(bita==0 && bitb==0)
                    {
                        flip=flip+1;
                    }
                }

                a=a>>1;
                b=b>>1;
                c=c>>1;

            }
            return flip;
    }
};