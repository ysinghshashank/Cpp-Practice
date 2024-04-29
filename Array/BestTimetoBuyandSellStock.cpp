class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int diff;
        int minPrice = prices[0];
        int result=0;
        for(int i=1 ;i < n;i++){
            diff = prices[i] - minPrice;
            minPrice = min(minPrice,prices[i]);
            result = max(result,diff);
        }
        return result;
    }
};