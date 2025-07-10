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

    // using top to down
    // void count(TreeNode* node, int &cnt){
    //     if (node == nullptr){
    //         return ;  
    //     }
    //     if (node->left != nullptr) {
    //         count (node->left, (++cnt));
    //     }
    //     if (node->right != nullptr){
    //         count (node->right, (++cnt));
    //     }
    // }
    
    // inorder
    int inorder(TreeNode* node, int &cnt){
        if (node == nullptr) return 0;
        cnt ++;
        inorder(node->left, cnt);
        inorder(node->right, cnt);
        return cnt;
    }
    int countNodes(TreeNode* root) {
        int cnt = 0;

        // for down to top
        // cnt = count(root);
        // return cnt;

        // for top to down
        // if (root == nullptr) {
        //     return 0;
        // }
        // if (root->left == nullptr && root->right == nullptr) {
        //     return 1;
        // }
        // count(root, cnt);
        // return cnt +1;

        // inorder traversal simple
        cnt = inorder(root, cnt);
        return cnt;
    }
};