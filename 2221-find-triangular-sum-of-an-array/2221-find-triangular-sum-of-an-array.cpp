class Solution {
public:
    int triangularSum(vector<int>& nums) {
        while (true) {
            if (nums.size() == 1) {
                break;
            }
            vector<int>newNums;
            for (int j = 1; j < nums.size(); j++) {
                newNums.push_back((nums[j-1] + nums[j])%10);
            }
            nums = newNums;
        }
        return nums[0];
    }
};