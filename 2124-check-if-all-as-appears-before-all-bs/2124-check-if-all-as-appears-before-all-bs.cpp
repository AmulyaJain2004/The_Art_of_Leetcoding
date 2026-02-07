class Solution {
public:
    bool checkString(string s) {
        bool ans = true;
        int i = 0;
        for (; i < s.size(); i++){
            if (s[i] == 'a') {
                continue;
            }
            else {
                break;
            }
        }
        for (int j = i; j < s.size(); j++ ){
            if (s[j] == 'b') {
                continue;
            }
            else {
                ans = false;
                break;
            }
        }
        return ans;
    }
};