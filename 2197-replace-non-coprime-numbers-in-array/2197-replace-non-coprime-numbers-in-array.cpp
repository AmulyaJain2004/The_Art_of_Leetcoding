class Solution {
public:
    // though already implemented gcd and lcm in cpp but it is better to implement ourselves
    vector<int> replaceNonCoprimes(vector<int>& nums) {
        if (nums.size() == 1) {
            return nums;
        }
        vector <int> ans;
        for (int i = 0; i < nums.size(); i++) {
            ans.push_back(nums[i]);
            while (ans.size() > 1) {
                int a = ans.back();
                int b = ans[ans.size() - 2];
                int gcdNum = gcd (a, b);
                if (gcdNum == 1) break;
                int lcmNum = lcm(a, b);
                ans.pop_back();
                ans.back() = lcmNum ;
            }
        }
        return ans;
    }
};