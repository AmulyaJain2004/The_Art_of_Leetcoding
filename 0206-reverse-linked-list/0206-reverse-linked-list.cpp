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
    ListNode* reverseList(ListNode* head) {
        // brute force approach is using stack data structure
        // optimized approach- iterative
        // if (head == NULL){
        //     return nullptr;
        // }
        // ListNode* prev = NULL;
        // ListNode* temp = head;
        // while(temp!=NULL){
        //     ListNode* front = temp->next;
        //     temp->next = prev;
        //     prev = temp;
        //     temp = front;
        // }
        // return prev;
        // }
        // optimized approach- recursive
        if (head == NULL || head->next == NULL){
            return head;
        }
        ListNode* newhead = reverseList(head->next);
        ListNode* front = head->next;
        front->next = head;
        head->next = NULL;
        return newhead;
    }
};