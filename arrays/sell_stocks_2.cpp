//problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock-ii/?envType=study-plan-v2&envId=top-interview-150

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = prices[0];
        int sell = prices[0];
        int profit=0;
        for(int i = 1 ; i <prices.size();i++){
            if(prices[i]>=sell){
                sell = prices[i]; 
            }
            else{
                profit += (sell-buy); 
                buy = prices[i];
                sell = prices[i];
            }
            if(i == prices.size()-1){  //when u sell at last day...else block wont run ..so here ur updating the profit 
                profit += sell-buy;
            }
        }
        if(profit == 0 ){            // if arr is continuosly increasing..u wont go to else block and update profit..so ur updating here
            profit = sell-buy;
        }
        return profit;
    }
};


//TRY 2 : EASY ONE .. O(N) ...USING 2 POINTERS...
class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy = 0;
        int sell = 0;
        int profit=0;

        for(int i =1;i<prices.size();i++){
            if(prices[buy]<prices[i] && prices[i]>prices[i-1]){
                sell = i;
                
            }else{
                if(sell>buy){
                    profit += prices[sell] - prices[buy];
                }
                buy = i;
            
            }
        }
        if(sell>buy){
            profit +=prices[sell] - prices[buy];
        }
        return profit;
    }
};
