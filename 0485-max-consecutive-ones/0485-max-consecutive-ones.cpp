class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max_cnt = 0;
        int curr_cnt = 0;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] == 1) {
                curr_cnt ++;
            }
            else {
                max_cnt = max(max_cnt, curr_cnt);
                curr_cnt = 0;
            }
        }
        max_cnt = max(max_cnt, curr_cnt);
        return max_cnt;
    }
};