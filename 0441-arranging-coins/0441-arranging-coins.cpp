class Solution {
public:
    int arrangeCoins(int n) {
        long int sum = 0;
        for (long int i = 1; i <= (long int )n; i ++) {
            sum += i;
            if (sum > (long int) n){
                return (int)i - 1;
            }
        }
        return (int)n;       
    }
};