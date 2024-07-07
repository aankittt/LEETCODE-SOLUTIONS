class Solution {
public:
    int numWaterBottles(int bottle, int exchange) {
        int sum=bottle;
        while(bottle>=exchange)
        {
            int left=bottle%exchange;
            bottle=bottle/exchange;

            sum+=bottle;
            bottle+=left;
        }      

        return sum;
    }
};