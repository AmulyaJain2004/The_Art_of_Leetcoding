class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) {
            return false;
        }
        unordered_map<char, int> mp1, mp2;
        for (int i = 0 ; i < s.size(); i ++) {
            if (mp1.find(s[i]) == mp1.end()) {
                mp1[s[i]] ++;
            }
            if (mp2.find(t[i]) == mp2.end()) {
                mp2[t[i]] ++;
            }
        }
        if (mp1 == mp2) {
            return true;
        }
        return false;
    }
};