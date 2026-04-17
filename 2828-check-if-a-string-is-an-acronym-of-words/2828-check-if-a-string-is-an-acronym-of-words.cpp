class Solution {
public:
    bool isAcronym(vector<string>& words, string s) {
        string acr = "";
        for (int i = 0; i < words.size(); i++) {
            acr += words[i][0];
        }
        if (acr == s) {
            return true;
        }
        return false;
    }
};