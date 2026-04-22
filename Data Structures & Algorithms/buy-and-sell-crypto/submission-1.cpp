class Solution {
public:
    int maxProfit(vector<int>& prices) {

        int maxProfit = 0;
        int minPrice = INT_MAX;
        int n = prices.size();

        for(int i = 0; i< n; i++){
            minPrice = min(minPrice, prices[i]); //buy
            int profit = prices[i] - minPrice;

            maxProfit = max( maxProfit, profit);
        }
        return maxProfit;
    }
};
