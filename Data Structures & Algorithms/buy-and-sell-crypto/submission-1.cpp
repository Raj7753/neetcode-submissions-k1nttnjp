class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int store = prices[0]; // store = sabse sasta price jo ab tak mila (buy karne ka best din)
        int profit = 0;
        for(int i =0;i<prices.size();i++){
            if(prices[i] < store) store = prices[i];
            if(profit < prices[i] - store) profit = prices[i] - store; // aaj k din ka profit previous profit se bda mile to update krde;
        }

       //  prices[i] - store aaj ka profit
        return profit;
    }
};
