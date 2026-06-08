class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> low, equal, high;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == pivot) {
                equal.push_back(nums[i]);
            }
            else if (nums[i] < pivot) {
                low.push_back(nums[i]);
            }
            else {
                high.push_back (nums[i]);
            }
        }
        vector<int> ans;

        for (int x : low) ans.push_back(x);
        for (int x : equal) ans.push_back(x);
        for (int x : high) ans.push_back(x);

        return ans;
    }
};