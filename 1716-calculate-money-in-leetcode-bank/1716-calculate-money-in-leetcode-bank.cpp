class Solution {
public:
    int totalMoney(int n) {
        int money = 0;
        int prev = 1;
        int curr = 1;
        for (int i = 1; i <= n; i++) {
            money += curr;
            curr ++;
            if (i % 7 == 0) {
                prev ++;
                curr = prev;
            }
        }
        return money;
    }
};