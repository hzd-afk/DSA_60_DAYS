class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min_price=prices[0];
        int max_profit=0;
        for(int i=1;i<prices.size();i++){
            int sell=prices[i]-min_price;
            if(sell>max_profit){
                max_profit=sell;
            }
            if(prices[i]<min_price){
                min_price=prices[i];
            }
        }
        return max_profit;
    }
};