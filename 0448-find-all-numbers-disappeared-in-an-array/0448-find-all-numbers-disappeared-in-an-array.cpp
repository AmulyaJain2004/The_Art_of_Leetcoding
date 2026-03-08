class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        // vector <int> ans;
        // unordered_map <int, int> mp;
        // for (int i = 0; i<nums.size(); i++) {
        //     mp[nums[i]] ++;
        // }
        // for (int i = 1; i <= nums.size(); i++){
        //     if (mp.find(i) == mp.end()){
        //         ans.push_back(i);
        //     }
        // }
        // return ans;
        // Optimization
        // using original array to mark visited index
        for (int i = 0; i < nums.size(); i++) {
            int idx = abs(nums[i]) - 1;
            if (nums[idx] > 0) {
                nums[idx] = -nums[idx];
            }
        }
        
        vector<int> result;
        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] > 0) {
                result.push_back(i + 1);
            }
        }
        return result; 
        
    }
};