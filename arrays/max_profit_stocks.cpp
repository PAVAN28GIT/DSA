
//crazyyy problem : https://leetcode.com/problems/best-time-to-buy-and-sell-stock/submissions/1222206280/

//i couldnt solve this ...its chatgpt solution ..but logic to find max profit within array is imp

int maxProfit(vector<int>& prices) {
        if (prices.empty()) // Handle empty prices vector
            return 0;

        int minPrice = numeric_limits<int>::max(); // Initialize minPrice to maximum value
        int maxProfit = 0;

        // Traverse prices array to find minimum price and maximum profit
        for (int price : prices) {
            minPrice = min(minPrice, price); // Update minPrice
            maxProfit = max(maxProfit, price - minPrice); // Update maxProfit
        }

        return maxProfit;
    }
