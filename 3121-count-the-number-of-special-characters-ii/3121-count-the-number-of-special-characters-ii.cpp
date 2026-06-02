class Solution {
public:
    int numberOfSpecialChars(string word) {
        int cnt = 0;
        unordered_set<char> upperset;
        unordered_set<char> lowerset;
        for (int i = 0; i < word.size(); i++) {
            if (isupper(word[i])) {
                upperset.insert(word[i]);
            }
            else {
                lowerset.insert(word[i]);
            }
        }
        for (char c : upperset) {
            if (lowerset.find(tolower(c)) != lowerset.end()) {
                cnt++;
            }
        }
        return cnt;
    }
};