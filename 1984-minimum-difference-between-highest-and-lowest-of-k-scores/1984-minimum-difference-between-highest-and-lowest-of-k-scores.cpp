class Solution {
public:
    int maxDiff(vector<int>& nums) {
        int maxNum {nums[0]};
        int minNum {nums[0]};
        for (int i {0}; i < nums.size(); i++) {
            maxNum = max(maxNum, nums[i]);
            minNum = min(minNum, nums[i]);
        }
        return maxNum - minNum;
    }
    int minimumDifference(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for (int i {0}; i < k; i++) {
            ans.push_back(nums[i]);
        }
        int minDiff {maxDiff(ans)};
        for (int i {k}; i < nums.size(); i++) {
            ans.push_back(nums[i]);
            ans.erase(ans.begin());
            minDiff = min(minDiff, maxDiff(ans));
        }
        return minDiff;
    }
};