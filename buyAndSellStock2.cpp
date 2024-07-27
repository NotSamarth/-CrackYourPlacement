class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 1;
        int profit = 0;
        for(int sell = 1 ; sell < prices.size() ; sell++){
            if(prices[sell] <= prices[buy]){
                
                buy = sell;
            }
            else{
                profit += prices[sell] - prices[buy];
                buy++;
            }
        }
        return profit;
    }   
};