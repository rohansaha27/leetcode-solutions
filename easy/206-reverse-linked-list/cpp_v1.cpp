// Pushed: 2026-09-30 14:02:28 UTC
// Difficulty: Easy
// Runtime: 0 ms
// Memory: 13.4 MB

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
        ListNode* prev = nullptr; 
        ListNode* curr = head;

        while(curr != nullptr) {
            ListNode* nxt = curr->next; 
            curr->next = prev; 
            prev = curr; 
            curr = nxt;
        }
        return prev; 
    }
};