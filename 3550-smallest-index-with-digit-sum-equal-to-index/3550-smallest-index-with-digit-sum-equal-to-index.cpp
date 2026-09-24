class Solution {
public:
    int smallestIndex(vector<int>& nums) {
        int ans = INT_MAX;
        for (int i = 0; i < nums.size(); i++) {
            int sumDigits = 0;
            int temp = nums[i];
            while (temp) {
                sumDigits += temp%10;
                temp/=10;
            }
            if (sumDigits == i) {
                ans = min(ans, i);
            }
        }
        if (ans == INT_MAX) {
            ans = -1;
        }
        return ans;
    }
};