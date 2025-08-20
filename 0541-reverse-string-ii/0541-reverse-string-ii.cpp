class Solution {
public:
    string reverseStr(string s, int k) {
        for (int i = 0; i < s.size(); i += 2*k) {
            int start = i;
            int end = i + k - 1;
            if (end > s.size() - 1) {
                end = s.size() - 1;
            }
            while (start < end) {
                swap(s[start], s[end]);
                start++;
                end--;
            }
        }
        return s;
    }
};