class Solution {
public:
    bool isValid(string word) {
        if (word.size() < 3) return false;
        bool b1 = false;
        bool b2 = false;
        for (int i = 0; i < word.size(); i++){
            if (isalpha(word[i])){
                char c = tolower(word[i]);
                if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
                    b1 = true;
                }
                else {
                    b2 = true;
                }
            }
            else if (!isdigit(word[i])){
                return false;
            }
        }
        return b1 && b2;
    }
};