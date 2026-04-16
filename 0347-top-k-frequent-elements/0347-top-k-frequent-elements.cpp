class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> mp;
        for (int i = 0; i < nums.size(); i++) {
            mp[nums[i]] ++;
        }
        vector<pair<int, int>> topk;
        for (auto it:  mp) {
            topk.push_back({it.first, it.second});
        }
        sort(topk.begin(), topk.end(), [](auto &a, auto &b) {
            return a.second > b.second;
        });
        vector<int> ans;
        for(int i = 0; i < k; i++) {
            ans.push_back(topk[i].first);
        }
        return ans;
    }
};