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
    void numPath(TreeNode* root, int num, vector<int>& pathNum) {
        if (root == nullptr) return ;
        if (root != nullptr) {
            num = num*10 + root->val;
        }
        if (root->left == nullptr && root->right == nullptr) {
            pathNum.push_back(num);
        }
        numPath(root->left, num, pathNum);
        numPath(root->right, num, pathNum);
    }
    int sumNumbers(TreeNode* root) {
        vector<int> pathNum;
        int sum = 0;
        numPath(root, 0, pathNum);
        for (int i: pathNum){
            sum += i;
        }
        return sum;
    }
};