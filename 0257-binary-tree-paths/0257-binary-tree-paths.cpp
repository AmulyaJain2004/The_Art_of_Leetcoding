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
    void dfs(TreeNode* node,  string s, vector<string>& ans){
        if (node == nullptr) return;
        if (!s.empty()) s.append("->");
        if (node != nullptr) {
            s.append(to_string(node->val));
        }
        if (node->left == nullptr && node->right == nullptr) {
            ans.push_back(s);
            return ;
        }
        dfs(node->left, s, ans);
        dfs(node->right, s, ans);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        vector<string> ans;
        dfs(root, "", ans);
        return ans;
    }
};