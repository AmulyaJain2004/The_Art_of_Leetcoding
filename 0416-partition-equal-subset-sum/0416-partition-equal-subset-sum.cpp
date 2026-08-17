class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size();
        int totalSum = 0;
        for (int x : nums) {
            totalSum += x;
        }
        if (totalSum % 2 != 0) {
            return false;
        }
        int target = totalSum / 2;
        vector<vector<bool>> dp(n + 1, vector<bool>(target + 1, false));
        // Sum 0 is always possible: choose nothing
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= target; j++) {

                // Don't take nums[i-1]
                dp[i][j] = dp[i - 1][j];

                // Take nums[i-1]
                if (nums[i - 1] <= j) {
                    dp[i][j] =
                        dp[i][j] || dp[i - 1][j - nums[i - 1]];
                }
            }
        }

        return dp[n][target];

    }
};