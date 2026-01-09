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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        int carry {0};
        ListNode* n = new ListNode(0);
        ListNode* temp = n;
        while (l1 != nullptr && l2 != nullptr) {
            int ans = carry + l1->val + l2->val;
            carry = ans / 10;
            ans = ans % 10;
            ListNode* newnode = new ListNode(ans);
            temp->next = newnode;
            temp = newnode;
            l1 = l1->next;
            l2 = l2->next;
        }
        while (l1 == nullptr && l2 != nullptr) {
            int ans = carry + l2->val;
            carry = ans / 10;
            ans = ans % 10;
            ListNode* newnode = new ListNode(ans);
            temp->next = newnode;
            temp = newnode;
            l2 = l2->next;
        }
        while (l1 != nullptr && l2 == nullptr) {
            int ans = carry + l1->val;
            carry = ans / 10;
            ans = ans % 10;
            ListNode* newnode = new ListNode(ans);
            temp->next = newnode;
            temp = newnode;
            l1 = l1->next;
        }
        if (carry) {
            ListNode* newnode = new ListNode(carry);
            temp->next = newnode;
            temp = newnode;
        }
        return n->next;
    }
};