class Solution {
public:
    long long maxSum(vector<int>& nums, int k, int mul) {
        long long int ans = 0;
        sort(nums.begin(), nums.end(), greater<int>());
        for (int i = 0; i < k; i++) {
            if (mul > 1) {
                ans += 1LL * nums[i] * mul;
            }
            else {
                ans += nums[i];
            }
            mul --;
        }
        return ans;
    }
};