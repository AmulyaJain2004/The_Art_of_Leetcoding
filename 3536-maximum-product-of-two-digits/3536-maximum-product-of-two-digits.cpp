class Solution {
public:
    int maxProduct(int n) {
        int num = n;
        int max1 = 0;
        int max2 = 0;

        while (num) {
            int digit = num % 10;
            num /= 10;

            if (digit >= max1) {
                max2 = max1;
                max1 = digit;
            }
            else if (digit > max2) {
                max2 = digit;
            }
        }

        return max1 * max2;
    }
};