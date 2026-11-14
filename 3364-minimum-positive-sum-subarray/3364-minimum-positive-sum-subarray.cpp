class Solution {
public:
    int minimumSumSubarray(vector<int>& nums, int l, int r) {
        int minSum = INT_MAX;
        int n = nums.size();
        vector<int>preSum(n+1);
        preSum[0] = 0;
        for (int i = 1; i <= n; i++) {
            preSum[i] = nums[i-1] + preSum[i-1];
        }
        for (int i = 0; i < n; i++) {
            for (int j = i+l-1; j <= i+r-1 && j < n; j++) {
                if (preSum[j+1] - preSum[i] > 0) {
                    minSum = min(minSum, preSum[j+1] - preSum[i]);
                }
            }
        }
        if (minSum == INT_MAX){
            return -1;
        }
        return minSum;
    }
};