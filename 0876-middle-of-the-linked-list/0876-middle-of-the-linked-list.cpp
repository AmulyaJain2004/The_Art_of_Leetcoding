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
    ListNode* middleNode(ListNode* head) {
        // Brute force using counting the node first and return the node at (n/2 + 1)th position
        int cnt = 0;
        ListNode* temp = head;
        while (temp != NULL){
            cnt ++;
            temp = temp->next;
        }
        temp = head;
        int middleIndex = int(cnt/2)+1;
        while (middleIndex!=0){
            middleIndex --;
            if (middleIndex == 0){
                break;
            }
            temp = temp->next;
        }
        return temp;
        // Optimized Approach: Tortoise&Hare approach or Slow&Fast pointers

    }
};