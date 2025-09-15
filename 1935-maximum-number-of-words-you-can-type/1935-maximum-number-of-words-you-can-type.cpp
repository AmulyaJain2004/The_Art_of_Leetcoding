class Solution {
public:
    int canBeTypedWords(string text, string brokenLetters) {
        unordered_map <char, int> mp;
        for (char c : brokenLetters) {
            mp[c] ++;
        }
        stringstream ss(text);
        string s;
        int cnt = 0;
        while (ss >> s) {
            bool flag = true;
            for (char i : s){
                if (mp.find(i) != mp.end()) {
                    flag= false;
                    break;
                }
            }
            if(flag) cnt++;
        }
        return cnt;
    }
};