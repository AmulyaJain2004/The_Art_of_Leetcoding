class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int cnt_p {-1};
        int cnt_pq {-1};
        int cnt_q {-1};
        int i {0};
        while (i+1 < nums.size() && nums[i] < nums[i+1]) {
            i ++;
            cnt_p ++;
        }
        if (cnt_p == -1) return false; 
        while (i+1 < nums.size() && nums[i] > nums[i+1]) {
            i ++;
            cnt_pq ++;
        }
        if (cnt_pq == -1) return false; 
        while (i+1 < nums.size() && nums[i] < nums[i+1]) {
            i ++;
            cnt_q ++;
        }
        if (cnt_q == -1 || i < nums.size()- 1) return false;
        return true;
    }
};