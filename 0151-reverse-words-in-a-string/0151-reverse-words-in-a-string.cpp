class Solution {
public:
    string reverseWords(string s) {
        stringstream ss(s);
        string str;
        stack<string> stk;
        while(ss >> str) {
            stk.push(str);
        }
        string revstr = ""; 
        while (!stk.empty()) {
            if (stk.size() == 1) {
                break;
            }
            revstr += stk.top();
            revstr += " ";
            stk.pop();
        }
        revstr += stk.top();
        stk.pop();
        return revstr;
    }
};