class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int ans {numBottles};
        for (int i = numBottles; i >= numExchange;) {
            ans += i / numExchange;
            i = (i / numExchange) + (i % numExchange);
        }
        return ans;
    }
};