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
        for (int i = 0; i <= n; i++) {
            dp[i][0] = true;
        }
        for (int i = 1; i <= n; i++) {
            int x = 0;
            for (int j = 1; j <= target; j++) {
                if (nums[i - 1] <= j) {
                    x = dp[i - 1][j - nums[i - 1]];
                }
                int y = dp[i - 1][j];
                dp[i][j] = x || y;
            }
        }
        return dp[n][target];
    }
};