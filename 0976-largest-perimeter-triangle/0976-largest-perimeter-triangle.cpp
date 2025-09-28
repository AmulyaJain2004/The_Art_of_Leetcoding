class Solution {
public:
    bool checkValidTriangle(int p1, int p2, int p3) {
        if (p1 + p2 > p3) {
            if (p2 + p3 > p1) {
                if (p3 + p1 > p2) {
                    return true;
                }
            } 
        }
        return false;
    }
    int largestPerimeter(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        for (int i = nums.size() - 1; i >= 2; i--) {
            int a = nums[i-2], b = nums[i-1], c = nums[i];
            if (checkValidTriangle(a, b, c)) {
                return a + b + c;
            }
        }
        return 0;
    }
};