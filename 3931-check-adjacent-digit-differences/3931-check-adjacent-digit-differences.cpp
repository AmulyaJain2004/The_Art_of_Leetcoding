class Solution {
public:
    bool isAdjacentDiffAtMostTwo(string s) {
        int n = s.size();
        bool ans = true;
        for (int i = 0; i < n - 1; i++) {
            if (abs((s[i] - '0') - (s[i+1] - '0')) <= 2) {
                ans = ans && true;
            }
            else {
                ans = ans && false;
            }
        }
        return ans;
    }
};