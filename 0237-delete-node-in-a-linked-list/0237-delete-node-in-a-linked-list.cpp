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
        ListNode* temp = node;
        while (temp->next->next != NULL) { // Stop at second last node
            int data = temp->val;
            temp->val = temp->next->val;
            temp->next->val = data;
            temp = temp->next;
        }
        temp->val = temp->next->val; // Copy last node value to second last node
        delete temp->next; // Delete last node
        temp->next = NULL; // Set next pointer to NULL
    }
}; 