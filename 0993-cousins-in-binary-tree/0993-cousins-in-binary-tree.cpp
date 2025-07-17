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
    // both level order bfs and dfs solution exist
    // dfs solution below:
    TreeNode* x_parent = nullptr;
    TreeNode* y_parent = nullptr;
    int x_depth = -1;
    int y_depth = -1;

    void traverse(TreeNode* node, TreeNode* parent, int depth, int x, int y) {
        if (!node) return;

        if (node->val == x) {
            x_parent = parent;
            x_depth = depth;
        }
        if (node->val == y) {
            y_parent = parent;
            y_depth = depth;
        }
        traverse(node->left, node, depth + 1, x, y);
        traverse(node->right, node, depth + 1, x, y);
    }

    bool isCousins(TreeNode* root, int x, int y) {
        traverse(root, nullptr, 0, x, y);
        return (x_depth == y_depth && x_parent != y_parent);
    }
};