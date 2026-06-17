class Solution {
public:
    string mapWordWeights(vector<string>& words, vector<int>& weights) {
        string ans = "";
        for (int i = 0; i < words.size(); i++ ) {
            int weighted_sum = 0;
            for (int j = 0; j < words[i].size(); j++) {
                weighted_sum += weights[words[i][j] - 'a'];
            }
            weighted_sum %= 26;
            ans += char('z'- weighted_sum);
        }
        return ans;
    }
};