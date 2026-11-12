class Solution {
public:
    int longestMonotonicSubarray(vector<int>& nums) {
        int longest_inc_size = 1;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> subarr;
            int k = 0;
            subarr.push_back(nums[i]);
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[j] > subarr[k]){
                    subarr.push_back(nums[j]);
                    k++;
                }
                else {
                    break;
                }
            }
            longest_inc_size = max(longest_inc_size, k+1);
        }
        int longest_dec_size = 1;
        for (int i = 0; i < nums.size(); i++) {
            vector<int> subarr;
            int k = 0;
            subarr.push_back(nums[i]);
            for (int j = i+1; j < nums.size(); j++) {
                if (nums[j] < subarr[k]){
                    subarr.push_back(nums[j]);
                    k++;
                }
                else {
                    break;
                }
            }
            longest_dec_size = max(longest_dec_size, k+1);
        }
        return max(longest_dec_size, longest_inc_size);
    }
};