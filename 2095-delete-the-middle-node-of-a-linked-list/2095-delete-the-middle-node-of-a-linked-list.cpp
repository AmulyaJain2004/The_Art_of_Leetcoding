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
class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        if (head == NULL || head->next ==NULL){
            return nullptr;
        }
        ListNode* temp = head;
        if (head->next->next == NULL){
            temp = temp->next;
            head->next = NULL;
            delete temp;
            return head;
        }
        temp = head;
        ListNode* fast = head;
        while (fast != NULL && fast->next != NULL){
            temp = temp->next;
            fast = fast->next->next;
        }
        ListNode* ref = temp->next;
        temp->val = ref->val;
        temp->next = ref->next;
        ref->next = NULL;
        delete ref;
        return head;
    }
};