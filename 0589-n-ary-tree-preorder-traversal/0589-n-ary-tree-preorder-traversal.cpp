/*
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> children;

    Node() {}

    Node(int _val) {
        val = _val;
    }

    Node(int _val, vector<Node*> _children) {
        val = _val;
        children = _children;
    }
};
*/

class Solution {
public:
    void dfs(Node* root, vector<int>& ans) {
        if (root == nullptr) return ;
        for (int i = 0; i < root->children.size(); i++) {
            ans.push_back(root->children[i]->val);
            dfs(root->children[i], ans);
        }
    }
    vector<int> preorder(Node* root) {
        vector <int> ans;
        if (root == nullptr) return {};
        ans.push_back(root->val);
        dfs(root, ans);
        return ans;
    }
};