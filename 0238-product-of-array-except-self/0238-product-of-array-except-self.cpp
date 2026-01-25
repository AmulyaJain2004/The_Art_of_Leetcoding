class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int prod {1};
        vector <int> ans;
        ans.push_back(prod);
        for (int i =1; i < nums.size(); i++) {
            prod *= nums[i-1];
            ans.push_back(prod);
        }
        prod = 1;
        ans[ans.size() - 1] *= prod;
        for (int i = nums.size()-2; i >=0; i--) {
            prod *= nums[i+1];
            ans[i] *= prod;
        }
        return ans;
    }
};