class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); i++) {
            nums[i] = abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        int n = nums.size();
        long long sum = 0;
        for(int i = 0; i < n/2; i++) {
            sum -= (nums[i] * nums[i]);
        }
        for (int i = n/2; i < n; i++) {
            sum += (nums[i] * nums[i]);
        }
        return sum;
    }
};