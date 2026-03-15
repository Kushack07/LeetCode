class Solution {
public:
    ListNode *detectCycle(ListNode *head) {
        
        if(head == nullptr) return nullptr;

        ListNode* slow = head;
        ListNode* fast = head;

        // Detect cycle
        while(fast && fast->next) {
            slow = slow->next;
            fast = fast->next->next;

            if(slow == fast) {
                slow = head;

                while(slow != fast) {
                    slow = slow->next;
                    fast = fast->next;
                }

                return slow;
            }
        }

        return nullptr;
    }
};
