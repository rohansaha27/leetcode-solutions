// Pushed: 2026-08-26 02:44:32 UTC
// Difficulty: Medium
// Runtime: 0 ms
// Memory: 77.1 MB

class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        // Dummy head to facilitate easy appending of new result nodes
        ListNode* dummyHead = new ListNode(0);
        ListNode* current = dummyHead;
        int carry = 0;

        // Loop until both lists are fully traversed and no carry remains
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int sum = carry;

            // Add value from l1 if it exists
            if (l1 != nullptr) {
                sum += l1->val;
                l1 = l1->next;
            }

            // Add value from l2 if it exists
            if (l2 != nullptr) {
                sum += l2->val;
                l2 = l2->next;
            }

            // Calculate new carry and the single digit value for the current position
            carry = sum / 10;
            current->next = new ListNode(sum % 10);
            
            // Advance the pointer in the result list
            current = current->next;
        }

        // The actual result list starts from the node after dummy head
        ListNode* result = dummyHead->next;
        delete dummyHead; // Free memory allocated for dummy head
        return result;
    }
};
