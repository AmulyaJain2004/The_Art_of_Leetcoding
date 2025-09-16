class Solution {
public:
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
                int gcdNum = gcd(a, b);
                if (gcdNum == 1) {
                    break;
                }
                ans.pop_back();
                ans.back() = lcm(a, b) ;
            }
        }
        return ans;
    }
};