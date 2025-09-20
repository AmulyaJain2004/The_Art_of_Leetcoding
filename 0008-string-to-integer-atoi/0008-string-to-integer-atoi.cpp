class Solution {
public:
    int myAtoi(string s) {
        int sign = 1;
        int start = 0;
        long int num = 0;
        while (start < s.size()){
            if (s[start] != ' ') {
                break;
            }
            start++;
        }
        if (start == s.size()) {
            return 0;
        }
        if (s[start] == '-') {
            sign = -1;
            start++;
        }
        else if (s[start] == '+'){
            start++;
        }
        if (isdigit(s[start]) && start < s.size()) {
            while (isdigit(s[start])){
                int digit = int(s[start] - '0');
                if (num > (INT_MAX - digit) / 10) {
                    if (sign == 1) {
                        return INT_MAX;
                    }
                    else {
                        return INT_MIN;
                    }
                }
                num = num * 10 + digit;
                start ++;
            }
            num = num * sign;
        }
        return num;
    }
};