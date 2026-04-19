class Solution {
public:
    int findDuplicate(vector<int>& nums) {
        // We can't use map as it instructs to use constant extra space and without modifying array
        // but we can take advantage of strings to solve this 
        // but this will not work because due to "11" and "1" being a substring 
        // but it should check for presence of 1 only and not being a part of 11.
        // Most optimized after taking hint is floyd warshall algorithm like in linked list
        int slow = nums[0];
        int fast = nums[0];
        do {
            slow = nums[slow];
            fast = nums[nums[fast]];
        } while (slow != fast);
        slow = nums[0];
        while (slow != fast) {
            slow = nums[slow];
            fast = nums[fast];
        }
        return slow;

        // There is a binary search approach too will do later.
    }
};