class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int j = 0; j < strs[0].size(); j ++) {
            if (!strs[0][j]) {
                return ans;
            }
            char temp = strs[0][j];
            for (int i = 0; i < strs.size(); i ++) {
                if (!strs[i][j] || strs[i][j] != temp) {
                    return ans;
                }
            }
            ans += temp;
        }
        return ans;
    }
};