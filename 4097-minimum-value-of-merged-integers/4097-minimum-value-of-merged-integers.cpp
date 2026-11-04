class Solution {
public:
    int minMergedInteger(vector<int>& nums) {
        int ans = INT_MAX;
        int n = nums.size();
        vector<int> merged(n/2);
        for (int i = 1; i < n; i+=2) {
            merged[(i-1)/2] = stoi(to_string(nums[i-1]) + to_string(nums[i]));
            // cout << merged[(i-1)/2] << "\n";
            ans = min(ans, merged[(i-1)/2]);
        }
        return ans;
    }
};