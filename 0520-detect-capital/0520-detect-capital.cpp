class Solution {
public:
    bool detectCapitalUse(string word) {
        bool iscap = true;
        if (isupper(word[0])) {
            if (word.size() != 1 && isupper(word[1])) {
                for (int i = 2; i < word.size(); i++) {
                    iscap = iscap && isupper(word[i]);
                }
            }
            else if (word.size() != 1 && islower(word[1])) {
                for (int i = 2; i < word.size(); i++) {
                    iscap = iscap && islower(word[i]);
                }
            }
        }
        else {
            for (int i = 1; i < word.size(); i++) {
                iscap = iscap && islower(word[i]);
            }
        }
        return iscap;
    }
};