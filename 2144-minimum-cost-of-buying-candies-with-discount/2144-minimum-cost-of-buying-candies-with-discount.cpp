class Solution {
public:
    int minimumCost(vector<int>& cost) {
        sort(cost.begin(), cost.end(), greater<int>());
        int ans = 0;
        for (int i = 0; i < cost.size(); i++) {
            // Every 3rd candy will be free
            if ((i + 1) % 3 == 0) {
                continue;
            }
            ans += cost[i];
        }
        return ans;
    }
};