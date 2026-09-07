#include <algorithm>
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max = 0 ;
        int buy = prices[0];
        for(int i = 1 ; i<prices.size(); i++)
        {
            if(buy>prices[i]){
                buy = prices[i];
            }
            else{
                max = std::max(prices[i]-buy, max);
            }
        }
        return max;
    }
};
