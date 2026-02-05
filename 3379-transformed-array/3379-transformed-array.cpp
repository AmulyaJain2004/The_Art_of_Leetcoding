class Solution {
public:
    vector<int> constructTransformedArray(vector<int>& nums) {
        vector<int> result(nums.size());
        for (int i = 0; i < nums.size(); i++) {
            int jump = abs(nums[i]) % nums.size();
            if (nums[i] > 0) {
                result[i] = nums[(i + jump) % nums.size()];
            }
            else if (nums[i] < 0) {
                int x = i - jump;
                if (x < 0) {
                    x = nums.size() + x;
                }
                result[i] = nums[x];
            }
            else {
                result[i] = nums[i];
            }
        }
        return result;
    }
};