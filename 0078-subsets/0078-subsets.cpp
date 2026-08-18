class Solution {
public:
    void solve(vector<vector<int>>& ans, vector<int>& temp, vector<int>& nums, int index) {
        if (index == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[index]);
        solve(ans, temp, nums, index+1);
        temp.pop_back();
        solve(ans, temp, nums, index+1);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> ans;
        int index = 0;
        vector<int> temp;
        solve(ans, temp, nums, index);
        return ans;
    }
};