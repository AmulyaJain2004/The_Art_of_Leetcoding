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
    void convert(TreeNode* node, string &str){
        if (node == nullptr) return ;
        str += to_string(node->val);
        if (node->left || node->right) {
            str += "(";
            convert(node->left, str);
            str += ")";
        }
        if (node->right) {
            str += "(";
            convert(node->right, str);
            str += ")";
        }
    }
    string tree2str(TreeNode* root) {
        string str = "";
        convert(root, str);
        return str;
    }
};