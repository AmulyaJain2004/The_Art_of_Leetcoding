class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        set<int>setnums (nums.begin(), nums.end());
        int min_val = * (min_element(nums.begin(), nums.end()));
        int max_val = * (max_element(nums.begin(), nums.end()));
        for (int i = min_val+1; i < max_val; i++) {
            if (setnums.find(i) == setnums.end()){
                ans.push_back(i);
            }
        }
        return ans;
    }
};