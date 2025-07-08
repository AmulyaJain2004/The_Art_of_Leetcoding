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
    int height (TreeNode* node, bool* bal){
        if (node == nullptr) return 0;
        int lh = height(node->left, bal);
        int rh = height(node->right, bal);
        int absDiff = lh > rh ? lh - rh : rh - lh ;
        if (absDiff > 1){
            *bal = false;
        }
        return 1 + max(lh, rh);
    }
    bool isBalanced(TreeNode* root) {
        int lh = 0;
        int rh = 0;
        bool bal = true;
        if (root == nullptr) {
            return bal;
        }
        height(root, &bal);
        return bal;
    }
};