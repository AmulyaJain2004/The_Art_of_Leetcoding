class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int left = 0;
        int right = (int)nums.size() - 1;
        while (left < right) {
            int mid = left + (right - left)/2;
            if (nums[mid] > nums[mid + 1]) {
                right = mid;
            }
            else {
                left = mid + 1; // upward slope need to go higher
            }
        }
        return right;
    }
};