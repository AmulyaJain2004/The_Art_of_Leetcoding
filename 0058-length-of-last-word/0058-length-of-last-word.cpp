class Solution {
public:
    int lengthOfLastWord(string s) {
        stringstream ss(s);
        string str;
        stack<string> stk;
        while (ss >> str) {
            stk.push(str);
        }
        str = stk.top();
        return str.size();
    }
};