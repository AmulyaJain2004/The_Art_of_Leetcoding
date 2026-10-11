class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int swaps = 0; 
        int nonZeroNums = 0;
        for(int i = 0; i < (int)nums.size(); i++) {
            if (nums[i] != 0) {
                nonZeroNums ++;
            }
        }
        for(int i = 0; i < nonZeroNums; i++) {
            if (nums[i] == 0) {
                swaps ++;
            }
        }
        return swaps;
    }
};