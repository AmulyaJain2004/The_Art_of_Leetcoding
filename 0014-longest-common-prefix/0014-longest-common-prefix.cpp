class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string ans = "";
        for (int j = 0; j < strs[0].size(); j ++) {
            char temp;
            if (strs[0][j]) {
                temp = strs[0][j];
            }
            else {
                break;
            }
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