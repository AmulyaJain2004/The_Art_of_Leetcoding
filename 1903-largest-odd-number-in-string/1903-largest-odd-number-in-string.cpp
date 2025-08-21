class Solution {
public:
    string largestOddNumber(string num) {
        // instead of stoi check the last digit for odd/even 
        // because stoi can overflow for large int
        // but in below for loop we are already checking from last digit so no need.
        for (int i = num.size() -1; i >=0; i--) {
            if (int(num[i]) % 2 != 0) {
                return num.substr(0, i+1);
            }
        }
        return "";
    }
};