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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        if (headA == nullptr || headB == nullptr) {
            return nullptr;
        }
        int lenA {0};
        ListNode* tempA = headA;
        while(tempA != nullptr) {
            lenA ++;
            tempA = tempA->next;
        }
        int lenB {0};
        ListNode* tempB = headB;
        while (tempB != nullptr) {
            lenB ++;
            tempB = tempB->next;
        }

        int diff {0};
        tempA = headA;
        tempB = headB;
        if (lenA > lenB) {
            diff = lenA  - lenB;
            for (int i = 0; i < diff; i++) {
                tempA = tempA->next;
            }
        }
        else {
            diff = lenB  - lenA;
            for (int i = 0; i < diff; i++) {
                tempB = tempB->next;
            }
        }
        if (tempA == tempB) {
            return tempA;
        }
        while (tempA != tempB) {
            tempA = tempA->next;
            tempB = tempB->next;
            if (tempA == tempB) {
                return tempA;
            }
        }
        return nullptr;
    }
};