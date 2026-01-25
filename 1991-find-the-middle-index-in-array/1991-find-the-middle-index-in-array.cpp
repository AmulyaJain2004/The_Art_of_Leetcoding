class Solution {
public:
    int findMiddleIndex(vector<int>& nums) {
        int summ = 0;
        for (int i = 0; i < nums.size(); i++) {
            summ += nums[i];
        }
        // the below code is correct if rightmost pivot index asked
        // int right = 0;
        // for (int i = nums.size() - 1; i >= 0; i--) {
        //     if (right == summ - right - nums[i]) {
        //         return i;
        //     }
        //     right += nums[i];
        // }
        // return -1;
        int left = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (left == summ - left - nums[i]) {
                return i;
            }
            left += nums[i];
        }
        return -1; 
    }
};