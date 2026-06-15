class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size();
        vector<int> ans(2);
        unordered_set<int>st;
        sort(nums.begin(), nums.end());
        for (int i = 0; i < n; i++) {
            if (st.find(nums[i]) == st.end()) {
                st.insert(nums[i]);
            }
            else {
                ans[0] = nums[i];
            }
        }
        for (int i = 1; i <= n; i++) {
            if (!st.count(i)) {
                ans[1] = i;
                break;
            }
        }
        return ans;
    }
};