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
    bool checkSym(vector<int>& vec) {
        int left = 0;
        int right = vec.size() -1;
        while (left < right) {
            if (vec[left] != vec[right]) {
                return false;
            }
            else {
                left ++;
                right --;
            }
        }
        return true;
    }
    bool isSymmetric(TreeNode* root) {
        if (root == nullptr) return true;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<int> level;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node) {
                    level.push_back(node->val);
                    q.push(node->left);
                    q.push(node->right);
                } 
                else {
                    level.push_back(INT_MIN);
                }
            }
            if (!checkSym(level)) {
                return false;
            }
        }
        return true;
    }
};