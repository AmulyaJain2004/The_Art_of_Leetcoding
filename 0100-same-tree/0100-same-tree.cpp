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
    // This approach might have worked but it will not work in case of using inorder 
    // void postorder(TreeNode* node, vector<int> &vec){
    //     if (node == nullptr) {
    //         vec.push_back(INT_MIN);
    //         return ;
    //     }
    //     postorder(node->left, vec);
    //     postorder(node->right, vec);
    //     vec.push_back(node->val);
    // }
    bool isSameTree(TreeNode* p, TreeNode* q) {
        // if (p == nullptr && q == nullptr) return true;
        // vector<int> vp;
        // vector<int> vq;
        // postorder(p, vp);
        // postorder(q, vq);
        // if (vp == vq) return true;
        // return false;

        // Correct Approach
        if (!p && !q) return true;               // dono null — same
        if (!p || !q) return false;              // ek null, ek non-null — not same
        if (p->val != q->val) return false;      // values different — not same

        return isSameTree(p->left, q->left) && isSameTree(p->right, q->right); // Checking both trees recursively
    }
};