class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
        unordered_map<int, int> mp1 ;
        for (int i =0; i < nums1.size(); i ++) {
            mp1[nums1[i]] ++;
        }
        unordered_map<int, int> mp2 ;
        for (int i =0; i < nums2.size(); i ++) {
            mp2[nums2[i]] ++;
        }
        vector <int> ans;
        for (auto x : mp1) {
            for (auto y : mp2) {
                if (x.first == y.first ){
                    int temp = min (x.second, y.second);
                    while (temp -- ) {
                        ans.push_back(x.first);
                    }
                }
            }
        }
        return ans;
    }
};