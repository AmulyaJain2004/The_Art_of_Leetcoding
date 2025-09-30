class Solution {
public:
    int triangularSum(vector<int>& nums) {
        for (int i = 0; i < nums.size(); ) {
            if (nums.size() == 1) {
                break;
            }
            vector<int>newNums;
            for (int j = i+1; j < nums.size(); j++) {
                newNums.push_back((nums[j-1] + nums[j])%10);
            }
            nums = newNums;
        }
        return nums[0];
    }
};