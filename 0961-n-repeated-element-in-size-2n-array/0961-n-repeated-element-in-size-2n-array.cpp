class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
        unordered_map<int, int> mp ;
        for(int i = 0 ; i < nums.size(); i++) {
            if (mp.find(nums[i]) == mp.end()) {
                mp[nums[i]] ++;
            }
            else {
                return nums[i];
            }
        }
        return -1;
    }
};