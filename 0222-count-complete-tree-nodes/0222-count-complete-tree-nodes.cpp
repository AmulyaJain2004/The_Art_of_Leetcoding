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
    // using bottom to top approach (uncomment the commented code for that)
    // int count(TreeNode* node){
    //     if (node == nullptr) return 0;
    //     int lh = count(node->left);
    //     int rh = count(node->right);
    //     return 1 + lh + rh;
    // }
    void count(TreeNode* node, int* cnt){
        if (node == nullptr) return ;
        count (node->left, &(++*cnt));
        count (node->right, &(++*cnt));
    }
    
    int countNodes(TreeNode* root) {
        int cnt = 0;
        // cnt = count(root);
        // return cnt;
        count(root, &cnt);
        return cnt/2 ;
    }
};