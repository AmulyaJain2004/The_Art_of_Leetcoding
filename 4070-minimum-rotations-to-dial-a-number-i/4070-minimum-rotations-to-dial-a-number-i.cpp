class Solution {
public:
    int minRotations(string s) {
        int from = 0;
        int to = -1;
        int rotations = 0;
        for (int i = 0; i < (int)s.size(); i++) {
            to = s[i] - '0';
            rotations += min(abs(to - from), 10-abs(to - from));
            from = to;
        }
        return rotations;
    }
};