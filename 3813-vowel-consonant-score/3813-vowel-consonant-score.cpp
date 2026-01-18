class Solution {
public:
    int vowelConsonantScore(string s) {
        int v {0};
        int c {0};
        int score {0};
        for (int i = 0; i < s.size(); i++){
            if (!isalpha((unsigned char)s[i])) {
                continue;
            }
            if (s[i] == 'a' || s[i] == 'e' || s[i] == 'i' || s[i] == 'o' || s[i] =='u') {
                v++;
            }
            else {
                c++;
            }
        }
        if (c) {
               score = (v / c);
        }
        else {
            score = 0;
        }
        return score;
    }
};