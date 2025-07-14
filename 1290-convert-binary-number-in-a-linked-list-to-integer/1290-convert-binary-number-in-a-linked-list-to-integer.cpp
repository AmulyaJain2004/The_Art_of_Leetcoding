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
    int getDecimalValue(ListNode* head) {
        ListNode* temp = head;
        int decimalVal = 0;
        int cnt = 0;
        while (temp != nullptr){
            temp=temp->next;
            cnt ++;
        }
        temp = head;
        while (temp != nullptr){
            decimalVal += (temp->val)*(pow(2, --cnt));
            temp = temp->next;
        }
        return decimalVal;
    }
};