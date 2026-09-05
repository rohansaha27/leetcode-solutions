// Pushed: 2026-09-05 18:12:49 UTC
// Difficulty: Easy
// Runtime: 13 ms
// Memory: 15.3 MB

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

        unordered_map<ListNode*, bool> cycleMap; 
        while(head) {
            if(cycleMap.contains(head)) {
                return true; 
            }
            cycleMap[head] = true;
            head = head->next;
        }

        return false; 
    }
};