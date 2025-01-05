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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* temp = head;
        int count = 0;
        while (temp != nullptr) {
            count++;
            temp = temp->next;
        }
        if (count - n == 0) {
            temp = head;
            head = head->next;
            delete temp;
            return head;
        }
        temp = head;
        ListNode* prev = head;
        temp = temp->next;
        for (int i = 0; i < count - n - 1; i++) {
            temp = temp->next;
            prev = prev->next;
        }
        prev->next = temp->next;
        delete temp;
        return head;
    }
};