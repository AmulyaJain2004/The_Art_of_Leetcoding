class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
        int x = -1;
        int left = 0;
        int right = nums.size() - 1;
        int middle = 0;
        while (left < right)
        {
            middle = left + (right - left)/2;
            if (nums[middle] == target) return middle;
            else if (nums[middle] > target) right = middle - 1;
            else left = middle + 1;
        }
        middle = left + (right - left)/2;
        if (nums[middle] < target) x = left + 1;
        else x = left ;
        return x;
    }
};