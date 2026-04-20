class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        // for (int i = 0; i < nums.size(); i++) {
        //     string num = to_string(nums[i]);
        //     if (num.size() % 2 == 0) {
        //         count ++;
        //     }
        // }

        // more optimized
        for (int i = 0; i < nums.size(); i++) {
            int num = nums[i];
            int num_digits = 0;
            while (num ) {
                num /= 10;
                num_digits ++;
            }
            if (num_digits % 2 == 0){
                count ++;
            }
        }
        return count;
    }
};