class Solution {
public:
    int digitSum(int num) {
        int summ = 0;
        while (num) {
            int digit = num % 10;
            summ += digit;
            num = num /10;
        }
        return summ;
    }
    int countEven(int num) {
        int count = 0;
        for (int i = 1; i <= num; i ++) {
            if (digitSum(i) %2 == 0) {
                count ++;
            }
        }
        return count;
    }
};