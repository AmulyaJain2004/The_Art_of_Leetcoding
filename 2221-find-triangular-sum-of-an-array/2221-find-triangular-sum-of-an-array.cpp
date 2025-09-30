class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // while (true) {
        //     if (nums.size() == 1) {
        //         break;
        //     }
        //     vector<int>newNums;
        //     for (int j = 1; j < nums.size(); j++) {
        //         newNums.push_back((nums[j-1] + nums[j])%10);
        //     }
        //     nums = newNums;
        // }
        // return nums[0];
        // Optimization we can do is inplace operation on same array instead of new array
        while (true) {
            if (nums.size() == 1) {
                break;
            }
            for (int j = 1; j < nums.size(); j++) {
                nums[j-1] = (nums[j-1] + nums[j])%10;
            }
            nums.pop_back();
        }
        return nums[0];
    }
};