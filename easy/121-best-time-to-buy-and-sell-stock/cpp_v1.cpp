// Pushed: 2026-08-31 18:33:38 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 97.5 MB

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int profit = 0; 
        int low = prices[0]; // lowest price so far
        
        for(int i=0; i<prices.size(); i++) {
            if(prices[i] < low) {
                low = prices[i]; 
            }

            int temp = prices[i] - low; 
            if (temp > profit) {
                profit = temp; 
            }
        }
        return profit; 
    }
};