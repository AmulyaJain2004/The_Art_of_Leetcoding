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
    int height(TreeNode* node, int* dia){
        if (node == nullptr) return 0;
        int lh = height(node->left, dia);
        int rh = height(node->right, dia);
        *dia = max(*dia, lh +rh);
        return 1+max(lh, rh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int dia = 0;
        height(root, &dia);
        return dia;
    }
};