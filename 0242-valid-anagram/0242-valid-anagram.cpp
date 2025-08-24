class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> mp1, mp2;
        for (int i = 0 ; i < s.size(); i ++) {
            mp1[s[i]] ++;
            mp2[t[i]] ++;
        }
        if (mp1 == mp2) {
            return true;
        }
        return false;
    }
};