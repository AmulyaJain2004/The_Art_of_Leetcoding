class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        // unordered_set<int> st (nums.begin(), nums.end());
        // for (int i = 1; i <= nums.size(); i ++) {
        //     if (st.find(k*i) == st.end()) {
        //         return k*i;
        //     }
        // }
        // return k*(nums.size() + 1);

        vector <bool> arr(101, false);
        for (int i  = 0; i < nums.size(); i++) {
            if (nums[i] % k == 0) {
                arr[nums[i]/k] = true;
            }
        }
        for (int i = 1; i <= 100; i ++) {
            if(arr[i] == false) {
                return k * i;
            }
        }
        return k*101;
    }
};