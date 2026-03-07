class Solution {
public:
    bool checkOnesSegment(string s) {
        if (s.find("01") != string::npos) {
            return false;
        }
        return true;
    }
};