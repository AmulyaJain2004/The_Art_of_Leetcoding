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
    void preorder(TreeNode* root, vector<int>& preord){
        if (root == nullptr) return;
        preord.push_back(root->val);
        preorder(root->left, preord);
        preorder(root->right, preord);
    }
    vector<int> preorderTraversal(TreeNode* root) {
        vector<int> preord;

        // Using Recursion
        // preorder(root, preord);
        // return preord;

        // Using iterative
        if (root == nullptr) return preord;
        stack<TreeNode*> st;
        st.push(root);
        while(!st.empty()){
            root = st.top();
            st.pop();
            preord.push_back(root->val);
            if (root->right!=nullptr){
                st.push(root->right);
            }
            if (root->left!=nullptr){
                st.push(root->left);
            }
        }
        return preord;
    }
};