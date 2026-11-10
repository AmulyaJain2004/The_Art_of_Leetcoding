class Solution {
public:
    bool containsNearbyDuplicate(vector<int>& nums, int k) {
        int n = nums.size();
        // brute force approach
        // for (int i = 0; i < n; i++) {
        //     for (int j = i + 1; j<n && j <= i+k; j++) { // better than j < n
        //         if (nums[i] == nums[j]) {
        //             return true;
        //         }
        //     }
        // }
        // return false;

        // optimised approach
        unordered_map<int,int>mp;
        for (int i = 0; i < n; i++){
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] = i;
            }
            else {
                if (abs(i - mp[nums[i]]) <= k) {
                    return true;
                }
                else {
                    mp[nums[i]] = i;
                }
            }
        }
        return false;
    }
};