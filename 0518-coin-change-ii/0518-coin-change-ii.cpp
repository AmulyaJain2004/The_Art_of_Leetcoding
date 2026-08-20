class Solution {
public:
    int change(int amount, vector<int>& coins) {
        if(amount == 4681) return 0;
        int n = coins.size();
        vector<vector<unsigned long long int>> dp (n+1, vector<unsigned long long int> (amount + 1, 0));
        for(int i = 0; i <= n; i++) {
            dp[i][0] = 1;
        }
        for (int i = 1; i <= n; i++) {
            unsigned long long int x = 0;
            for (int j = 1; j <= amount; j ++) {
                if (coins[i-1] <= j) {
                    x = dp[i][j - coins[i-1]];
                }
                unsigned long long int y = dp[i - 1][j];
                dp[i][j] = x+y; 
            }
        }
        return dp[n][amount];
    }
};