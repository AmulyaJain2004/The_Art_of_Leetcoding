class Solution {
public:
    static bool cmp (pair<char, int>&a, pair<char, int>&b) {
        return a.second > b.second;
    }
    string frequencySort(string s) {
        unordered_map<char, int> mp;
        for (int i = 0; i < s.size(); i ++) {
            mp[s[i]] ++;
        }
        vector<pair<char, int>> freq;
        for (auto m : mp) {
            freq.push_back(m);
        }
        sort (freq.begin(), freq.end(), cmp);
        string ans = "";
        for (int i = 0; i < freq.size(); i ++) {
            while (freq[i].second--) {
                ans += freq[i].first;
            }
        }
        return ans;
    }
};