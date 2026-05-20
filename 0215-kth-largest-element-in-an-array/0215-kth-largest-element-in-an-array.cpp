class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> mh;
        for (int i = 0; i < nums.size(); i++) {
            mh.push(nums[i]);
        }
        for (int i = 0; i < k - 1; i++) {
            mh.pop();
        }
        return mh.top();
    }
};