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
    ListNode* rotateRight(ListNode* head, int k) {
        if (head == nullptr || head->next == nullptr) {
            return head;
        }
        ListNode* prev = nullptr;
        ListNode* temp = head;
        int cnt = 0;
        while (temp != nullptr) {
            cnt ++;
            prev = temp;
            temp = temp->next;
        }
        prev->next = head;
        ListNode* curr = head;
        k = k % cnt;
        int num = cnt - k;
        while (num --) {
            prev = prev->next;
            curr = curr->next;
        }
        prev->next = nullptr;
        return curr;
    }
};