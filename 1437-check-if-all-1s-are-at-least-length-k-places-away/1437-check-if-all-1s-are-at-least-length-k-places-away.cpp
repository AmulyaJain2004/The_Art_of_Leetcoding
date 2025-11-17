class Solution {
public:
    bool kLengthApart(vector<int>& nums, int k) {
        vector<int> positions;
        for (int i = 0 ; i < nums.size(); i ++) {
            if (nums[i] == 1) {
                positions.push_back(i);
            }
        }
        bool is_klen = true;
        int i = 0;
        int j = 1;
        while (j < positions.size()) {
            if (positions[j] - positions[i] - 1 >= k) {
                is_klen = is_klen && true;
            }
            else {
                is_klen = is_klen && false;
            }
            i++;
            j++;
        }
        return is_klen;
    }
};