class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        int lsum {0};
        vector<int> leftSum;
        leftSum.push_back(lsum);
        for (int i = 1; i < nums.size(); i++) {
            lsum += nums[i-1];
            leftSum.push_back(lsum);
        }
        int rsum {0};
        vector<int>rightSum(nums.size());
        rightSum[rightSum.size() -1] = rsum;
        for (int i = nums.size() - 2; i >= 0; i--) {
            rsum += nums[i+1];
            rightSum[i] = rsum;
        }
        vector<int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(abs(leftSum[i] - rightSum[i]));
        }
        return ans;
    }
};