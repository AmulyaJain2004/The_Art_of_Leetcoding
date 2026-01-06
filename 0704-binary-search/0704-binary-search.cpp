class Solution {
public:
    int search(vector<int>& nums, int target) {
        int x = -1;
        int left = 0;
        int right = nums.size() - 1;
        while(left <= right) {
            int middle = left + (right - left)/2;
            if (nums[middle] == target) return middle;
            if (nums[middle] < target) left = middle + 1;
            if (nums[middle] > target) right = middle - 1;
        }
        return x;
    }
};