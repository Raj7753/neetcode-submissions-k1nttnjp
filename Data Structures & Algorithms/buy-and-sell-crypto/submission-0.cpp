class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int store = prices[0];
        int profit = 0;
        for(int i =0;i<prices.size();i++){
            if(prices[i] < store) store = prices[i];
            if(profit < prices[i] - store) profit = prices[i] - store;
        }
        return profit;
    }
};
