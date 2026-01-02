class Solution {
public:
    int majorityElement(vector<int>& nums) {
        // Boyer-Moore Algorithm and Pigeon Hole Principle based
        int cnt = 0;
        int candidate = 0;

        for (int i = 0; i < nums.size(); i++) {
            if (cnt == 0) {
                candidate = nums[i];
            }
            if (candidate == nums[i]) {
                cnt++;
            } else {
                cnt--;
            }
        }
        return candidate;
    }
};