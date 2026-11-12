class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int n = nums.size();
        int maxlength = 1;
        int local_inc_size = 1;
        int local_dec_size = 1;

        for(int i = 1; i < n; i ++){
            if (nums[i] > nums[i - 1]) {
                local_inc_size++;
                local_dec_size = 1;
            } else if (nums[i] < nums[i - 1]) {
                local_dec_size++;
                local_inc_size = 1;
            } else {
                local_inc_size = 1;
                local_dec_size = 1;
            }
            int maxlocal = max(local_inc_size, local_dec_size);
            maxlength = max(maxlength, maxlocal);
        }
        return maxlength;
    }
};