class Solution {
public:
    int coinChange(vector<int>& coins, int amount) {
        int n = coins.size();
        const int INF = 1e9;
        vector<vector<int>> dp (n+1, vector<int> (amount + 1, INF));
        for(int i = 0; i <= n; i++) {
            dp[i][0] = 0;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= amount; j ++) {
                int x = INF;
                if (coins[i-1] <= j) {
                    x = dp[i][j - coins[i-1]] + 1;
                }
                int y = dp[i - 1][j];
                dp[i][j] = min(x, y); 
            }
        }
        return dp[n][amount] == INF ? -1 : dp[n][amount];
    }
};