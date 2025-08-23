class Solution {
public:
    bool isIsomorphic(string s, string t) {
        unordered_map<char, char> st;
        unordered_map<char, char> ts;
        if (s.size()!= t.size()) {
            return false;
        }
        bool a = true;
        bool b = true;
        for(int i = 0; i < s.size(); i ++){    
            if (st.find(s[i]) == st.end()){
                st[s[i]] = t[i];
            }
            if (ts.find(t[i]) == ts.end()) {
                ts[t[i]] = s[i];
            }
            if (st[s[i]] != t[i]) {
                a = false;
            }
            if (ts[t[i]] != s[i]) {
                b = false;
            }
        }
        return a && b;
    }
};