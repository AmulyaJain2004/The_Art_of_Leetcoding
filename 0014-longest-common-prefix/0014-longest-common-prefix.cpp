class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if (strs.empty()) {
            return "";
        }
        // string ans = "";
        // for (int j = 0; j < strs[0].size(); j ++) {
        //     if (!strs[0][j]) {
        //         return ans;
        //     }
        //     char temp = strs[0][j];
        //     for (int i = 0; i < strs.size(); i ++) {
        //         if (!strs[i][j] || strs[i][j] != temp) {
        //             return ans;
        //         }
        //     }
        //     ans += temp;
        // }
        // return ans;

        // above is O(N*M) approach we can optimize a little more
        sort(strs.begin(), strs.end());  // O(N log N)

        string first = strs.front();
        string last  = strs.back();
        string ans = "";

        for (int i = 0; i < min(first.size(), last.size()); i++) {
            if (first[i] == last[i])
                ans += first[i];
            else
                break;
        }
        return ans;
    }
};