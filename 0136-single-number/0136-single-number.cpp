class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int size = nums.size();
        for (int i = 1; i < size; i++)
        {
            nums[i] = nums[i]^nums[i-1];
        }
        return nums[size-1];
    }
};