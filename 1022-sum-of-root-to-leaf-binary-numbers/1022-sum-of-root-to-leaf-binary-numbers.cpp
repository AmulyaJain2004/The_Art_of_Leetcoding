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
    void dfs (TreeNode* root, vector<int> &nums, int num) {
        if (root == nullptr) return;
        num = num*2 + root->val;
        if (root->left == nullptr && root->right == nullptr) {
            nums.push_back(num);
        }
        dfs(root->left, nums, num);
        dfs(root->right, nums, num);
    }   
    int sumRootToLeaf(TreeNode* root) {
        if (root == nullptr) return 0;
        vector <int> nums;
        int num = 0;
        dfs(root, nums, num);
        int summ = 0;
        for (int i = 0; i < nums.size(); i++) {
            summ += nums[i];
        }
        return summ;
    }
};