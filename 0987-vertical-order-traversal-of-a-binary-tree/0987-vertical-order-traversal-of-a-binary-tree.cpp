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
    vector<vector<int>> verticalTraversal(TreeNode* root) {
        // Map: col -> row -> multiset of node values
        map<int, map<int, multiset<int>>> nodes;

        // Queue for BFS: node, row, col
        queue<tuple<TreeNode*, int, int>> q;
        q.push({root, 0, 0}); // root is at row=0, col=0

        while (!q.empty()) {
            auto [node, row, col] = q.front(); 
            q.pop();
            nodes[col][row].insert(node->val);
            if (node->left) q.push({node->left, row + 1, col - 1});
            if (node->right) q.push({node->right, row + 1, col + 1});
        }

        // Prepare the result
        vector<vector<int>> result;
        for (auto& [col, row_map] : nodes) {
            vector<int> col_vals;
            for (auto& [row, values] : row_map) {
                col_vals.insert(col_vals.end(), values.begin(), values.end());
            }
            result.push_back(col_vals);
        }
        return result;
    }
};