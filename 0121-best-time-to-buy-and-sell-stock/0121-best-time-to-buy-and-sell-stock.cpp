class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        int maxP = 0;
        vector<int> lprice (n, INT_MAX),  rprice(n, INT_MIN);
        lprice[0] = prices[0];
        for (int i = 1; i < prices.size(); i++){
            lprice[i] = min(prices[i], lprice[i-1]);
        }
        rprice[n-1] = prices[n-1];
        for (int i = n -2; i>=0 ; i--) {
            rprice[i] = max(prices[i], rprice[i+1]);
        }

        for (int i = 0 ; i < prices.size(); i++) {
            maxP = max(abs(rprice[i] - lprice[i]), maxP);
        }
        return maxP;
    }
};