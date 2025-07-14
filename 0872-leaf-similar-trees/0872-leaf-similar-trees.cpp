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
    void leaves(TreeNode* node, vector<int>& vec){
        if (node == nullptr) return ;
        if (!node->left && !node->right) {
            vec.push_back(node->val);
            return;
        }
        leaves(node->left, vec);
        leaves(node->right, vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        if (!root1 && !root2) return true;
        vector<int> vec1;
        vector<int> vec2;
        leaves(root1, vec1);
        leaves(root2, vec2);
        return vec1 == vec2;
    }
};