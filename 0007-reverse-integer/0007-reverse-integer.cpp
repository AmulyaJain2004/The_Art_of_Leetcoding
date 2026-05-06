class Solution {
public:
    int reverse(int x) {
        int num = x;
        long res = 0;
        while (num) {
            int digit = num % 10;
            res = res*10 + digit;
            num = num/10;
        }
        if (res < INT_MIN || res > INT_MAX) {
            return 0;
        }
        return res;
    }
};