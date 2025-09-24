class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int summ = 0;
        for (int i = 0; i < nums.size(); i++) {
            summ += nums[i];
        }
        return ((nums.size()*(nums.size() + 1)/2) - summ);
    }
};