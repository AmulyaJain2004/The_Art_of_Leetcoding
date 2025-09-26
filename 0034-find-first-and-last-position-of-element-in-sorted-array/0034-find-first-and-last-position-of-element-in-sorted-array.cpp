class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int left = 0; 
        int right = nums.size()-1;
        int mid = 0;
        vector<int> range;
        
        while (left <= right) {
            mid = left + (right-left)/2;
            if (nums[mid] >= target){
                right = mid - 1;
            }
            else {
                left = mid + 1;
            }
        }
        if (left < nums.size() && nums[left] == target) {
            range.push_back(left);
        } else {
            range.push_back(-1);
        }

        left = 0;
        right = nums.size() -1;
        while (left <= right) {
            mid = left + (right-left)/2;
            if (nums[mid] <= target){
                left = mid + 1;
            }
            else {
                right = mid - 1;
            }
        }
        if (right >= 0 && nums[right] == target) {
            range.push_back(right);
        } else {
            range.push_back(-1);
        }

        return range;
    }
};