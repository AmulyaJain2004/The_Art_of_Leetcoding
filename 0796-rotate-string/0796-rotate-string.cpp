class Solution {
public:
    bool rotateString(string s, string goal) {
        // int idx = 0;
        // for (int i = 0; i < s.size(); i ++) {
        //     if (s[i] == goal[0]) {
        //         idx = i;
        //     }
        // }
        // int start = 0;
        // for (int i = 0; i < s.size(); i++) {
        //     if (goal[start] == s[idx]) {
        //         start ++;
        //         idx ++;
        //         idx = idx % s.size();
        //     }
        //     else {
        //         return false;
        //     }
        // }
        // return true;
        
        for (int j = 0; j < s.size(); j ++) {
            char c = s[0];
            for (int i = 1; i < s.size(); i++) {
                s[i-1] = s[i];
            }
            s[s.size()-1] = c;
            if (s == goal) {
                return true;
            }
        }
        return false;
    }
};