class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        // First brute force approach is to sort the strings and group them if they are equal
        // Second is optimized approach
        unordered_map <string, vector<string>> mp;
        for (int i = 0; i < strs.size(); i++) {
            vector<int> freq (26,0);
            for (int j = 0; j < strs[i].size(); j++) {
                freq[strs[i][j] - 'a']++;
            }
            string key = "";
            for (int j = 0; j < 26; j++){
                key += "#" + to_string(freq[j]);
            }
            mp[key].push_back(strs[i]);
        }
        vector<vector<string>> anagramsGrp;
        for (auto it: mp) {
            anagramsGrp.push_back(it.second);
        }
        return anagramsGrp;
    }
};