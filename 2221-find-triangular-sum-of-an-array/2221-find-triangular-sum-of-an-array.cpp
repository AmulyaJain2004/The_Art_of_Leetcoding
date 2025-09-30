class Solution {
public:
    int triangularSum(vector<int>& nums) {
        // for (int j = 0; j < nums.size() -1; j++) {
        //     if (nums.size() == 1) {
        //         return nums[0];
        //     }
        //     vector<int>newNums;
        //     for (int i = 1 ; i < nums.size(); i++){
        //         int temp = (nums[i] + nums[i-1])%10;
        //         newNums.push_back(temp);
        //     }
        //     nums = newNums;
        // }
        // return nums[0];
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