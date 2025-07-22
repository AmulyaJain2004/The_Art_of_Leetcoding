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
    void pathCheck(vector<vector<int>>& ans, vector<int> path, TreeNode* root, int sum, int targetSum) {
        if (root == nullptr) return ;
        if (root != nullptr) {
            sum += root->val;
            path.push_back(root->val);
        }
        if (root->left == nullptr && root->right == nullptr) {
            if (targetSum == sum) {
                ans.push_back(path);
            }
        }
        pathCheck(ans, path, root->left, sum, targetSum);
        pathCheck(ans, path, root->right, sum, targetSum);
    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if (root == nullptr) return {};
        vector<vector<int>> ans;
        vector<int> path;
        pathCheck(ans, path, root, 0, targetSum);
        return ans;
    }
};