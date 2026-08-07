class Solution {
public:
    int findProduct(int num) {
        int product = 1;
        int number = num;
        while (number) {
            product*= number % 10;
            number/=10;
        }
        return product;
    }
    int smallestNumber(int n, int t) {
        int num = n;
        while (true) {
            int product = findProduct(num);
            if (product % t == 0) {
                return num;
            }
            num++;
        }
    }
};