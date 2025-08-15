class Solution {
public:
    string removeOuterParentheses(string s) {
        stack<char> stk;
        string ans = "";
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                if (!stk.empty()) {
                    ans += s[i];
                }
                stk.push(s[i]);
            }
            if (s[i] == ')') {
                stk.pop();
                if (!stk.empty()) {
                    ans += s[i];
                }
                else {
                    ans += "";
                }
            }
        }
        return ans;
    }
};