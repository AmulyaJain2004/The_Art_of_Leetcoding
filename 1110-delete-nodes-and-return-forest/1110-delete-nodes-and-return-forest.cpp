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
    TreeNode* check(TreeNode* node, unordered_set<int>& st, vector<TreeNode*>& forest) {
        if (node == nullptr) return nullptr;
        node->left = check(node->left, st, forest);
        node->right = check(node->right, st, forest);

        if (st.find(node->val) != st.end()) {
            if (node->left) forest.push_back(node->left);
            if (node->right) forest.push_back(node->right);
            return nullptr;
        }
        return node;
    }
    vector<TreeNode*> delNodes(TreeNode* root, vector<int>& to_delete) {
        unordered_set<int> st (to_delete.begin(), to_delete.end());
        vector<TreeNode*> forest;

        if (check(root, st, forest)) {
            forest.push_back(root);
        }
        return forest;
    }
};