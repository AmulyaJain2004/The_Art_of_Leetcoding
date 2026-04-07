class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map <char, int> s2t;
        unordered_map <char, int> t2s;

        for (int i = 0; i < s.size(); i++) {
            s2t[s[i]]++;
        }

        for (int i = 0; i < t.size(); i++) {
            t2s[t[i]]++;
        }

        if (s2t == t2s) {
            return true;
        }
        return false;
    }
};