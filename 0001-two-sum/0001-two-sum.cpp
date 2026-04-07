class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map <int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            int tofind = target - nums[i];
            if (mp.find(tofind) != mp.end()) {
                ans.push_back(mp[tofind]);
                ans.push_back(i);
            }
            else {
                mp[nums[i]] = i;
            }
        }
        return ans;
    }
};