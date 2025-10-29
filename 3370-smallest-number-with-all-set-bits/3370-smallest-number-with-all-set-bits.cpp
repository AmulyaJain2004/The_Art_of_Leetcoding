class Solution {
public:
    int smallestNumber(int n) {
        if (n == 1) return 1;
        double num = log(n)/log(2);
        if (num - int(num) != 0) return pow(2, ceil(num))-1;
        else return pow(2, ceil(num +1))-1;
    }
};