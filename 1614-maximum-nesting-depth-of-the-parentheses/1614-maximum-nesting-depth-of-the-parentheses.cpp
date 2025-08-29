class Solution {
public:
    int maxDepth(string s) {
        stack<char> stk;
        int ans = 0;
        // int localMaxNum = 0;
        for (int i = 0; i < s.size(); i++) {
            if (s[i] == '(') {
                stk.push(s[i]);
                // if (localMaxNum < stk.size()) {
                //     localMaxNum ++;
                // }
            }
            else if (s[i] == ')') {
                if (ans < stk.size()) {
                    ans = stk.size();
                }
                stk.pop();
                // if (stk.empty()) {
                //     ans = localMaxNum;
                //     localMaxNum = 0;
                // }
            }
        }
        return ans;
    }
};