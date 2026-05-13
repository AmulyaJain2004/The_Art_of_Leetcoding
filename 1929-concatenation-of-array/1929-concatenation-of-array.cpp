class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        int n = nums.size();
        vector<int> arr(2*n, 0);
        for (int i = 0; i < n; i++) {
            arr[i] = nums[i];
            arr[n + i] = nums[i];
        }
        return arr;
    }
};