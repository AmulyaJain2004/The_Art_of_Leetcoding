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
    int maxLevelSum(TreeNode* root) {
        int maxLvlSum {INT_MIN};
        int maxLvl {0};
        int currLvl {0};
        queue<TreeNode*> q;
        if (root == nullptr) return 0;
        q.push(root);
        while(!q.empty()) {
            currLvl ++;
            int size = q.size();
            vector<int>level;
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
                level.push_back(node->val);
            }
            int currLvlSum {0};
            for (int i = 0; i < level.size(); i++) {
                currLvlSum += level[i];
            }
            if (currLvlSum > maxLvlSum) {
                maxLvlSum = currLvlSum;
                maxLvl = currLvl;                
            }
        }
        return maxLvl;
    }
};