/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    void deleteNode(ListNode* node) {
        // ListNode* temp = node;
        // while (temp->next->next != NULL) {
        //     int data = temp->val;
        //     temp->val = temp->next->val;
        //     temp->next->val = data;
        //     temp = temp->next;
        // }
        // temp->val = temp->next->val;
        // delete temp->next;
        // temp->next = NULL;

        // Optimised approach below:
        // if (node == nullptr || node->next == nullptr) return; // Optional => Edge case: last node can't be deleted this way

        node->val = node->next->val; 
        ListNode* temp = node->next; 
        node->next = node->next->next; 
        delete temp; 
    }
}; 