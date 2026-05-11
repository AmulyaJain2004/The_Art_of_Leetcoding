class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> ans;
        int n = nums.size();
        string numbers = "";
        for (int i = 0; i < n; i++) {
            numbers += to_string(nums[i]);
        }
        int m = numbers.size();
        for (int i = 0; i < m; i++) {
            ans.push_back(numbers[i] - '0');
        }
        return ans;
    }
};