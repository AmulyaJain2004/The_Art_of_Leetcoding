class Solution {
public:
    bool rotateString(string s, string goal) {
        // for (int j = 0; j < s.size(); j ++) {
        //     char c = s[0];
        //     for (int i = 1; i < s.size(); i++) {
        //         s[i-1] = s[i];
        //     }
        //     s[s.size()-1] = c;
        //     if (s == goal) {
        //         return true;
        //     }
        //     // we can do above using substring but somehow slower than below
        //     // string temp = s.substr(1) + s[0];
        //     // if (temp == goal) {
        //     //     return true;
        //     // }
        //     // s = temp;            
        // }
        // return false;
        // optimized solution: -
        // If goal is a rotation of s, then goal must always be a substring of s + s.
        if (s.size() != goal.size()) {
            return false;
        }
        s = s + s;
        if (s.find(goal) != string::npos) {
            return true;
        }
        return false;
    }
};