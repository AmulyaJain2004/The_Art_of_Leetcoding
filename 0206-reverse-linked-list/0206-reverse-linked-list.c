/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     struct ListNode *next;
 * };
 */
struct ListNode* reverseList(struct ListNode* head) {
    if (head == NULL || head->next == NULL) {
        return head;
    }
    struct ListNode *temp = head->next;
    struct ListNode *prev = head;
    prev->next = NULL;
    while (temp->next != NULL)
    {
        head = temp;
        temp = temp -> next;
        head -> next = prev;
        prev = head;
    }
    head = temp;
    head -> next = prev;
    return head;
}