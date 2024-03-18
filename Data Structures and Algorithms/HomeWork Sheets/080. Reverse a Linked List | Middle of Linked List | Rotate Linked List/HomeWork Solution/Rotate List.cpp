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
        if (head) {
        int size = 0;
        ListNode *curr = head, *tail = head, *prev = NULL;
        while (curr) {
            tail = curr;
            curr = curr->next;
            size++;
        }
        if (k %= size) {
        int moves = size - k;
        curr = head;
        while (moves--) {
            prev = curr;
            curr = curr->next;
        }
        prev->next = NULL;
        tail->next = head;
        head = curr;
        }
        }
        return head;
    }
};
