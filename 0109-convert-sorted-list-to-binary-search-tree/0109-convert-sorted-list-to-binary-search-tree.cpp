/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
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
    // my approach 1:
    // ListNode* findMid(ListNode* first, ListNode* last){
    //     ListNode* slow = first;
    //     ListNode* fast = first;
    //     while (fast!=last && fast->next!=last){
    //         slow = slow->next;
    //         fast = fast->next->next;
    //     }
    //     return slow;
    // }
    // TreeNode* BST(ListNode* first, ListNode* last){
    //     if (first == last) return nullptr;
    //     ListNode* mid = findMid(first, last);
    //     TreeNode* node = new TreeNode(mid->val);
    //     node->left = BST(first, mid);
    //     node->right = BST(mid->next, last);
    //     return node;
    // }

    // my approach 2:
    TreeNode* BST(ListNode* &head, int left, int right) {
        if (left > right) return nullptr;
        int mid = left + (right - left) / 2;
        TreeNode* leftChild = BST(head, left, mid - 1);
        TreeNode* root = new TreeNode(head->val);
        head = head->next;
        TreeNode* rightChild = BST(head, mid + 1, right);
        root->left = leftChild;
        root->right = rightChild;
        return root;
    }

    TreeNode* sortedListToBST(ListNode* head) {
        // my approach 1:
        // if (head == nullptr) return nullptr;
        // ListNode* firstNode = head;
        // return BST(firstNode, nullptr);

        // my approach 2:
        int cnt = 0;
        ListNode* temp = head;
        while(temp != nullptr) {
            temp = temp->next;
            cnt++;
        }
        return BST(head, 0, cnt-1);
    }
};