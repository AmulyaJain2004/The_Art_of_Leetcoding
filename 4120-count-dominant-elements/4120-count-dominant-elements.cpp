class Solution {
public:
    int countDominantElements(vector<int>& nums) {
        if (nums.size() == 1) {
            return 1;
        }
        int ans= 0;
        if (nums.size() == 2) {
            if (nums[0] >= nums[1]) {
                ans++;
            }
            if (nums[1] >= nums[0]) {
                ans++;
            }
            return ans;
        }
        for (int i = 0; i< nums.size(); i++) {
            if (i-1 < 0 && i+1 < nums.size() && nums[i] >= nums[i+1]) {
                ans ++;
            }
            else if (i+1 >= nums.size() && i-1 >= 0 && nums[i] >= nums[i-1]) {
                ans ++;
            }
            else if (i-1 >= 0 && i+1 < nums.size() && nums[i] >= (int)ceil((float)(nums[i-1] + nums[i+1])/2)) {
                ans ++;
            }
        }
        return ans;
    }
};