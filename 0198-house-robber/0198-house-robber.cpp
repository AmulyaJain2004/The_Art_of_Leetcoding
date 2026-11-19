class Solution {
public:
    vector<int>dp;
    int solve(vector<int>& nums, int currHome) {
        if (currHome >= nums.size()) {
            return 0;
        }
        if (dp[currHome] != -1) {
            return dp[currHome];
        }
        int steal = nums[currHome] + solve(nums, currHome + 2); // for alternate stealing
        int skip = solve(nums, currHome + 1); // skip to next house
        return dp[currHome] = max(steal, skip);
    }
    int rob(vector<int>& nums) {
        dp.assign(101, -1);
        int currHome = 0;
        return solve(nums, currHome);
    }
};