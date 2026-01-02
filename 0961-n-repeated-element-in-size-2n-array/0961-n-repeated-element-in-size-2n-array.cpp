class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        // Time: O(n) and Space: O(n) 
        // unordered_map<int, int> mp ;
        // for(int i = 0 ; i < nums.size(); i++) {
        //     if (mp.find(nums[i]) == mp.end()) {
        //         mp[nums[i]] ++;
        //     }
        //     else {
        //         return nums[i];
        //     }
        // }
        // return -1;
        // Time: O(n) & Space: O(1)
        for (int i = 0; i < nums.size(); i ++) {
            if (i+1 < nums.size() && nums[i] == nums[i+1]) {
                return nums[i];
            }
            else if (i+2 < nums.size() && nums[i] == nums[i+2]) {
                return nums[i];
            }
            else if (i+3 < nums.size() && nums[i] == nums[i+3]) {
                return nums[i];
            }
        }
        return -1;
    }
};