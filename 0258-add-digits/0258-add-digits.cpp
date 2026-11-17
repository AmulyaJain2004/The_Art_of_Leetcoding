class Solution {
public:
    int addDigits(int num) {
        int number = num;
        int sum = 0;
        while (number) {
            int digit = number % 10;
            sum += digit;
            number /= 10;
            if (number == 0 && sum/10 != 0) {
                number = sum;
                sum = 0;
            }
        }
        return sum;
    }
};