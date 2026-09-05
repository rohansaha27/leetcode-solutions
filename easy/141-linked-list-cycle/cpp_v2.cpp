// Pushed: 2026-09-05 18:32:05 UTC
// Difficulty: Easy
// Runtime: 6 ms
// Memory: 11.9 MB

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
        ListNode* fast = head; 
        ListNode* slow = head;

        while(fast) {
            if(fast->next == nullptr) {
                return false;
            }
            else if(fast->next->next == nullptr) {
                return false; 
            }

            fast = fast->next->next;
            slow = slow->next; 

            if(fast == slow) {
                return true; 
            }
        } 
        return false; 
    }
};