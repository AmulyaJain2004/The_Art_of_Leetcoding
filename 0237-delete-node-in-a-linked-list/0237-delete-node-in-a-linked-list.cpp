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
        while (temp->next->next != NULL) {
            int data = temp->val;
            temp->val = temp->next->val;
            temp->next->val = data;
            temp = temp->next;
        }
        temp->val = temp->next->val;
        delete temp->next;
        temp->next = NULL;
    }
}; 