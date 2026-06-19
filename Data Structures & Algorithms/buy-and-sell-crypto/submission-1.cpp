class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int min=prices[0];
        int profit=0;

        for(int i=0;i<prices.size();i++){
            if(prices[i]<min){
                min=prices[i];
            }
            profit=max(profit,prices[i]-min);
        }
        return profit;
    }
};

/*
Alternative way to write:
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minPrice=INT_MAX;
        int maxProfit=0;

        for(int price: prices){

            minPrice=min(price,minPrice);
            maxProfit=max(maxProfit, price-minPrice);

        }
        return maxProfit;
    }
};
*/
