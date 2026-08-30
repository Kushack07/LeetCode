class Solution {
public:
    ListNode* reverseBetween(ListNode* head, int left, int right) {

        if (left == right) return head;

        ListNode dummy(0);
        dummy.next = head;

        ListNode* prev = &dummy;

        // Go to node just before left
        for (int i = 1; i < left; i++)
            prev = prev->next;

        // Reverse from left to right
        ListNode* curr = prev->next;

        for (int i = 0; i < right - left; i++) {
            ListNode* temp = curr->next;
            curr->next = temp->next;
            temp->next = prev->next;
            prev->next = temp;
        }

        return dummy.next;
    }
};