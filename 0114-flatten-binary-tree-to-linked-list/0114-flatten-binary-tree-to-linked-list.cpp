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
     void convert(TreeNode* &prev, TreeNode* curr) {
        if (!curr) return;

        prev->right = curr;
        prev->left = nullptr;
        prev = curr;

        // Save original right because we overwrite curr->right in recursive call
        TreeNode* rightSubtree = curr->right;

        convert(prev, curr->left);
        convert(prev, rightSubtree);
    }

    void flatten(TreeNode* root) {
        if (!root) return;
        TreeNode* prev = root;
        TreeNode* leftSubtree = root->left;
        TreeNode* rightSubtree = root->right;

        root->left = nullptr;
        convert(prev, leftSubtree);
        convert(prev, rightSubtree);
    }
};