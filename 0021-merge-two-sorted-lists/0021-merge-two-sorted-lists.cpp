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
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* t1 = list1;
        ListNode* t2 = list2;
        ListNode* list3 = new ListNode();
        ListNode* t3 = list3;
        while (t1 != nullptr && t2 != nullptr) {
            if (t1->val >= t2->val) {
                ListNode* newNode = new ListNode(t2->val);
                t3->next = newNode;
                t3 = newNode;
                t2 = t2->next;
            }
            else if (t1->val < t2->val) {
                ListNode* newNode = new ListNode(t1->val);
                t3->next = newNode;
                t3 = newNode;
                t1 = t1->next;
            } 
        }
        if (t1 != nullptr && t2 == nullptr) {
            while (t1 != nullptr) {
                ListNode* newNode = new ListNode(t1->val);
                t3->next = newNode;
                t3 = newNode;
                t1 = t1->next;
            }
        }
        else {
            while (t2 != nullptr) {
                ListNode* newNode = new ListNode(t2->val);
                t3->next = newNode;
                t3 = newNode;
                t2 = t2->next;
            }
        }
        return list3->next;
    }
};