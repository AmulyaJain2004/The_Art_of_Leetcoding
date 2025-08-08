/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    // TreeNode* BST(TreeNode* node, vector<int>& nums){
    //     int lindex = 0;
    //     int rindex = nums.size()-1;
    //     int target = lindex + (rindex - lindex)/2;
    //     node->val = nums[target];
    //     TreeNode* current = node;
    //     while(lindex <= rindex){
    //         int mid = lindex + (rindex - lindex)/2;
    //         TreeNode* newnode = new TreeNode(0);
    //         if (nums[mid] == nums[target]) {
    //             current->val = nums[mid];
    //             target = mid;
    //         }
    //         else if (nums[mid] > nums[target]){
    //             current->right = newnode;
    //             current = newnode;
    //             newnode->val = nums[mid];
    //             rindex = mid - 1;
    //             target = mid;
    //         }
    //         else {
    //             current->right = newnode;
    //             current = newnode;
    //             newnode->val = nums[mid];
    //             lindex = mid - 1;
    //             target = mid;
    //         }
    //     }
    //     return node; 
    // }

    TreeNode* BST(vector<int>& nums, int left, int right){
        if (left > right) return nullptr;
        int mid = left + (right-left)/2;
        TreeNode* node = new TreeNode(nums[mid]);
        node->left = BST(nums, left, mid - 1);
        node->right = BST(nums, mid + 1, right);
        return node;
    }

    TreeNode* sortedArrayToBST(vector<int>& nums) {
        return BST(nums, 0, nums.size()-1);
    }
};