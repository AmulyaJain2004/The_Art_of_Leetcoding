class Solution {
public:
    int getMinDistance(vector<int>& nums, int target, int start) {
        int dist = INT_MAX;
        int n = nums.size();
        for (int i = 0; i < n; i++ ) {
            if (nums[i] == target) {
                dist = min (dist, abs(i - start));
            }
        }
        return dist;
    }
};