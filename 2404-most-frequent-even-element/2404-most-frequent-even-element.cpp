class Solution {
public:
    int mostFrequentEven(vector<int>& nums) {
        unordered_map<int, int>mp;
        for(int i = 0; i < nums.size(); i++) {
            if (nums[i]%2 == 0) {
                mp[nums[i]]++;
            }
        }
        vector<pair<int, int>> vp; 
        for(auto it: mp) {
            vp.push_back({it.first, it.second});
        }
        if (vp.empty()) return -1;
        sort(vp.begin(), vp.end(), [](auto &a, auto &b) {
            if (a.second == b.second) {
                return a.first < b.first; // smaller number first
            }
            return a.second > b.second; // higher frequency first
        });
        return vp[0].first;
    }
};