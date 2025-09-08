class Solution {
public:
    int minOperations(vector<int>& nums) {
        for (int i = 1; i < nums.size(); i ++) {
            if (nums[i] != nums[i-1]) {
                return 1;
            }
        }
        return 0;
    }
};