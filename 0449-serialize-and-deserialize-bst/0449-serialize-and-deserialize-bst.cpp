/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Codec {
public:
    void preorder(TreeNode* node, string &s) {
        if (node == nullptr) {
            s += "# ";
            return ;
        }
        s += to_string(node->val) + " ";
        preorder(node->left, s);
        preorder(node->right, s);
    }

    TreeNode* string2Tree (stringstream &ss) {
        string token;
        getline(ss, token, ' ');
        if (token == "#") {
            return nullptr;
        }
        TreeNode* node = new TreeNode(stoi(token));
        node->left = string2Tree(ss);
        node->right = string2Tree(ss);
        return node;
    }
    // Encodes a tree to a single string.
    string serialize(TreeNode* root) {
        string s;
        preorder(root, s);
        return s;
    }

    // Decodes your encoded data to tree.
    TreeNode* deserialize(string data) {
        stringstream ss(data);
        return string2Tree(ss);
    }
};

// Your Codec object will be instantiated and called as such:
// Codec* ser = new Codec();
// Codec* deser = new Codec();
// string tree = ser->serialize(root);
// TreeNode* ans = deser->deserialize(tree);
// return ans;