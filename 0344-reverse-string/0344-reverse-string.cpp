class Solution {
public:
    void reverse(vector<char>& s, int n) {
        if (n == 1) {
            return;
        }
        char c = s[0];
        s.erase(s.begin());
        reverse(s, n-1);
        s.push_back(c);
    }
    void reverseString(vector<char>& s) {
        // iterative and two pointer 
        // int start = 0;
        // int end = s.size() - 1;
        // while (start < end) {
        //     swap (s[start], s[end]);
        //     start ++;
        //     end --;
        // }

        // recursive
        int n = s.size();
        reverse(s, n);
    }
};