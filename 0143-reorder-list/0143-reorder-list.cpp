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
    void reorderList(ListNode* head) {
        // if (head == nullptr || head->next == nullptr) return;
        // Find middle (tail boundary)
        // ListNode* slow = head;
        // ListNode* fast = head;
        // while (fast->next != nullptr && fast->next->next != nullptr) {
        //     slow = slow->next;
        //     fast = fast->next->next;
        // }

        // ListNode* curr = head;

        // Stop when we reach middle
        // while (curr != slow && curr->next != slow) {

        //     // Find last node and its previous
        //     ListNode* prev = curr;
        //     ListNode* last = curr->next;

        //     while (last->next != nullptr) {
        //         prev = last;
        //         last = last->next;
        //     }

        //     // Remove last node
        //     prev->next = nullptr;

        //     // Insert after curr
        //     ListNode* temp = curr->next;
        //     curr->next = last;
        //     last->next = temp;

        //     // Move curr forward
        //     curr = temp;
        // }

        // The above approach would work but it is O(n^2)
        // so the efficient approach is prepare all the other half in reverse and
        // then simply merge O(n) for middle search O(n) for reverse and O(n) for rearranging

        if (head == nullptr || head->next == nullptr) {
            return;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast->next != nullptr && fast->next->next != nullptr) {
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev = nullptr;
        ListNode* curr = slow->next;
        slow->next = nullptr;
        while (curr != nullptr) {
            ListNode* nxtNode = curr->next;
            curr->next = prev;
            prev = curr;
            curr = nxtNode;
        }
        ListNode* first = head;
        ListNode* second = prev;
        while (second != nullptr) {
            ListNode* temp1 = first->next;
            ListNode* temp2 = second->next;
            first->next = second;
            second->next = temp1;
            first = temp1;
            second = temp2;
        }
    }
};