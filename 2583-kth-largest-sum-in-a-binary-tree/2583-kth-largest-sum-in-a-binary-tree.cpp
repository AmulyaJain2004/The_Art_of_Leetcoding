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
    long long kthLargestLevelSum(TreeNode* root, int k) {
        vector<long long> lvlSum;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()) {
            int size = q.size();
            vector<long long> level;
            long long curSum {0};
            for (int i = 0; i < size; i++) {
                TreeNode* node = q.front();
                q.pop();
                if (node->left != nullptr) q.push(node->left);
                if (node->right != nullptr) q.push(node->right);
                level.push_back(node->val);
            }
            for (int i = 0; i < level.size(); i++) {
                curSum += level[i];
            }
            lvlSum.push_back(curSum);
        }
        if (k > lvlSum.size()) return -1;
        sort(lvlSum.begin(), lvlSum.end());
        return lvlSum[lvlSum.size()-k];
        
    }
};