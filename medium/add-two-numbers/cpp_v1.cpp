// C++ Implementation
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* dummy = new ListNode(0);
        ListNode* curr = dummy;
        int carry = 0;
        
        while (l1 != nullptr || l2 != nullptr || carry != 0) {
            int val1 = (l1 != nullptr) ? l1->val : 0;
            int val2 = (l2 != nullptr) ? l2->val : 0;
            
            // Calculate sum and carry
            int total = val1 + val2 + carry;
            carry = total / 10;
            curr->next = new ListNode(total % 10);
            
            // Move pointers forward
            curr = curr->next;
            if (l1 != nullptr) l1 = l1->next;
            if (l2 != nullptr) l2 = l2->next;
        }
        
        ListNode* result = dummy->next;
        delete dummy; // Clean up dummy node to prevent memory leak
        return result;
    }
};
