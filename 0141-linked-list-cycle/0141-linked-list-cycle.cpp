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
    bool hasCycle(ListNode *head) {
        // brute force approach by maintaining a count of visited nodes by hashing table which will be done later.
        // optimized approach floyd cycle algo or slowfast or tortoiseHare algo
        if (head== nullptr || head->next ==nullptr){
            return false;
        }
        ListNode* slow = head;
        ListNode* fast = head;
        while (fast!= nullptr && fast->next!=nullptr) {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast) {
                return true;
            }
        }
        return false;
    }
};